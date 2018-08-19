/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Space.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 09:47:43 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/22 09:47:46 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Space.hpp"

Space::Space(void) {
	
	this->_win_maxW = 0;
	this->_win_maxH = 0;
	this->_maxW = 120;
	this->_maxH = 40;
	this->_stop = 0;
	this->_time = 1;
	for (int i; i < 100; i++)
		this->_bad[i].setX(RIGHT);
	for (int i = 0; i < 100; i++) {
		this->_stars[i].setX(i % 100);
		this->_stars[i].setAlive(0);		
	}
	for (int i = 0; i < 20; i++) {
		this->_eRockets[i].setX(RIGHT - 1);
		this->_eRockets[i].setAlive(0);		
	}
	this->_r_Nbr = 0;
	this->_score = 0;
	init_vis();
}

Space::Space(Space const & src) {
	*this = src;
}

Space::~Space(void) { 
	std::cout << "GAME OVER" << std::endl;
}

Space		& Space::operator= (Space const & src) {
	return (*this);
}

void		Space::lifecircle(void) {

	int ch;
	int	y = this->_maxH / 2;
	int	x = 1;
	int iter = 4;

	while (!this->_stop) {

		print_info();
		if (this->_hero.getHP() == 0) {
			while (1) {
				box(this->_wind, 0, 0);
				wrefresh(this->_wind);
				wattron(this->_wind, COLOR_PAIR(6));
				mvwaddstr(this->_wind, 15, 55, "GAME OVER");
				wattron(this->_wind, COLOR_PAIR(1));
				mvwaddstr(this->_wind, 25, 10, "Press ESC to leave the game");
				wattron(this->_wind, COLOR_PAIR(5));
				mvwaddstr(this->_wind, 25, 58, "OR");
				wattron(this->_wind, COLOR_PAIR(2));
				mvwaddstr(this->_wind, 25, 90, "Press SPACE to continue");
				wattron(this->_wind, COLOR_PAIR(5));	
				int ch = getch();
				if (ch == 27) {
					this->_stop = 1;
					break ;
				}
				if (ch == 32) {
					this->_hero.setHP(10);
					this->_stop = 0;
					this->_score = 0;
					this->_t = time(0);
					print_info();
					break ;
				}
				refresh();
			}
		}
		switch ((ch = getch())) {

			case 27 : 
				this->_stop = 1;
				break ;
			case KEY_UP :
				y - 1 > UP ? y-- : 0;
				break ;
			case KEY_DOWN : 
				y + 1 < DOWN ? y++ : 0;
				break ;
			case KEY_LEFT : 
				x - 1 > LEFT ? x-- : 0;
				break ;
			case KEY_RIGHT : 
				x + 1 < RIGHT ? x++ : 0;
				break ;
			case 32 :
				this->_rockets[_r_Nbr].setX(x + 1);
				this->_rockets[_r_Nbr].setY(y);
				this->_r_Nbr++;
				if (this->_r_Nbr == 200) {
				 	this->_r_Nbr = 0;
				}
				break ;
		}
		this->_hero.setX(x);
		this->_hero.setY(y);
		mvwaddch(this->_wind, y, x, this->_hero.getForm() | A_BOLD | COLOR_PAIR(2)); // печать Героя
		refresh_Enemy(y, x);
		for (int i = 0; i < this->_r_Nbr && i < 200; i++)
			refresh_Rocket(i);
		refreshStars(iter % 7 == 0 ? 1 : 0);
		refresh_eRocket(19);
		box(this->_wind, 0, 0);
		wrefresh(this->_wind);
		refresh();
		iter++;
	}
	system("killall afplay");
	delwin(this->_wind);
	endwin();
}

bool		Space::check_colisions(Enemies &n_enemy) {

	if ((this->_hero.getX1() == n_enemy.getX1() || this->_hero.getX1() == n_enemy.getX2()) 
		&& this->_hero.getY1() == n_enemy.getY1()) {

			this->_hero.setHP(this->_hero.getHP() - 1);
			n_enemy.setX(RIGHT);
			n_enemy.setAlive(0);
			return (1);
	} 
	
		for (int n = 0; n < 200; n++) {

			if ((this->_rockets[n].getX1() + 1 == n_enemy.getX1() ||
				this->_rockets[n].getX1() + 1 == n_enemy.getX2()) &&
				this->_rockets[n].getY1() == n_enemy.getY1()) {
		
				this->_rockets[n].setX(RIGHT + 1);
				n_enemy.setAlive(0);
				n_enemy.setX(RIGHT);
				return (1);
			}
	}
	return (0);
}

void		Space::refresh_Rocket(int nb) {

	int x1 = this->_rockets[nb].getX1() + 1;
	int y1 = this->_rockets[nb].getY1();


	mvwaddch(this->_wind, y1, x1, this->_rockets[nb].getForm() | COLOR_PAIR(4));
	this->_rockets[nb].setX(x1);
}

void		Space::refresh_eRocket(int nb) {
	int		n;
	int		i;
	int		y;

	int random = (rand() % nb) + 5; 
	for (i = 0; i < 20; i++) {
		if (i % random == 0) {
			if (this->_eRockets[i].getAlive() == 0) {
				this->_eRockets[i].setAlive(1);
				this->_eRockets[i].setY(i + rand() % 40);
			}
		}
	}
	for (i = 0; i < 20; i++) {
		if (this->_eRockets[i].getAlive() == 1) {
			y = ((i % 20 * 2 + 1) == 1) ? ((i % 20 * 2 + 1) + 1) : (i % 20 * 2 + 1);  
			this->_eRockets[i].setY(y);
		}
	}
	for (n = 0; n < 20; n++) {
		
		if (this->_eRockets[n].getAlive() == 1) {

				int x1 = this->_eRockets[n].getX1() - 1;
				int y1 = this->_eRockets[n].getY1();

				if (check_colisions(this->_eRockets[n])) {

					this->_score -= 10;
					continue ;
				}
				if (x1 < LEFT + 1) {
					
					this->_eRockets[n].setAlive(0);
					this->_eRockets[n].setX(RIGHT - 1);
					this->_eRockets[n].setY(n + rand() % 40);
					continue ;
				}
				this->_eRockets[n].setX(x1);
			mvwaddch(this->_wind, y1, x1 - 2, '-' | COLOR_PAIR(6));
		}
	}
}

void		Space::refresh_Enemy(int hero_y, int hero_x) {

	int		n;
	int		i;
	int		y;

	int random = (rand() % 42) + 21; 
	for (i = 0; i < 100; i++) {
		if (i % random == 0) {
			if (this->_bad[i].getAlive() == 0)
				this->_bad[i].setAlive(1);
		}
	}
	for (i = 0; i < 100; i++) {
		if (this->_bad[i].getAlive() == 1) {
			y = ((i % 40 + 1) == 1) ? ((i % 40 + 1) + 1) : (i % 40 + 1);  
			this->_bad[i].setY(y);
		}
	}
	for (n = 0; n < 100; n++) {
		
		if (this->_bad[n].getAlive() == 1) {

				int x1 = this->_bad[n].getX1() - 1;
				int y1 = this->_bad[n].getY1();

				if (check_colisions(this->_bad[n])) {
					this->_score += 10;
					continue ;
				}
				if (x1 < LEFT + 1) {
					
					this->_bad[n].setAlive(0);
					this->_bad[n].setX(RIGHT);
					continue ;
				}
				this->_bad[n].setX(x1);
			mvwaddch(this->_wind, y1, x1 + 1, this->_bad[n].getForm() | COLOR_PAIR(3));
			mvwaddch(this->_wind, y1, x1, this->_bad[n].getForm() | COLOR_PAIR(3));
		}
	}
}

bool		Space::check_colisions(Rockets & n_enemy) {

	if (this->_hero.getX1() == n_enemy.getX1() && this->_hero.getY1() == n_enemy.getY1()) {

			this->_hero.setHP(this->_hero.getHP() - 1);
			n_enemy.setAlive(0);
			n_enemy.setX(RIGHT);
			return (1);
	} 
	return (0);
}

void		Space::refreshStars(int key) {

	int		i;
	int 	x;
	int		y;

	int random = (rand() % 42) + 50; 
	for (i = 0; i < 100; i++) {
		if (i % random == 0 && key) {
			if (this->_stars[i].getAlive() == 0)
				this->_stars[i].setAlive(1);
		}
	}

	for (i = 0; i < 100; i++) {
		if (this->_stars[i].getAlive() == 1) {
			y = ((i % 40 + 1) == 1) ? ((i % 40 + 1) + 1) : (i % 40 + 1);  
			this->_stars[i].setY(y);
		}
	}

	for (i = 0; i < 100; i++) {
		
		if (this->_stars[i].getAlive() == 1) {

				x = this->_stars[i].getX1() - key;
				y = this->_stars[i].getY1();

				if (x < LEFT + 1) {
					
					this->_stars[i].setAlive(0);
					this->_stars[i].setX(RIGHT);
					continue ;
				}
				this->_stars[i].setX(x);
				mvwaddch(this->_wind, y, x, this->_stars[i].getForm() | COLOR_PAIR(5));
		}
	}
}
