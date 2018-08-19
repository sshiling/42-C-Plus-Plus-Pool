/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Space_Vis.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:15:03 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:15:14 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Space.hpp"

time_t 		Space::_t = time(0);

void		Space::init_colors(void) {
	
	int		n = 1;

	start_color();
	if (has_colors()) {
		init_pair(1, COLOR_CYAN, COLOR_BLACK);
		init_pair(2, COLOR_GREEN, COLOR_BLACK);
		init_pair(3, COLOR_MAGENTA, COLOR_BLACK);
		init_pair(4, COLOR_YELLOW, COLOR_BLACK);
		init_pair(5, COLOR_WHITE, COLOR_BLACK);
		init_pair(6, COLOR_RED, COLOR_BLACK);
	}
	color_set(n, NULL);
}

void	Space::check_initscr(void) {
	
	if (COLS < 120 || LINES < 40) {
		endwin();
		std::cout << "Error: Too small window." << std::endl;
		exit(0);
	}
}

void		Space::init_vis(void) {

	initscr();		// curses-mode
	check_initscr();

	int shiftx = (COLS - this->_maxW) / 2;
	int shifty = (LINES - this->_maxH) / 2;
	
	this->_wind = newwin(this->_maxH, this->_maxW, shifty, shiftx);
	// this->_conf = newwin(this->_maxH, this->_maxW, shifty - 10, shiftx - 10);

	curs_set(0);	// no cursor
	noecho();
	cbreak();		// disable line buffer
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	timeout(50);
	init_colors();
	system("afplay ./sounds/soundtrack.mp3&");

	box(this->_wind, 0, 0);
	wrefresh(this->_wind);
}

void		Space::print_info(void) {
	
    static struct tm	*l_time;
	time_t				t;

	t = time(0);
	t = t - this->_t;
	l_time = localtime(&t);

	this->_time++;
	werase(this->_wind);
	wattron(this->_wind, COLOR_PAIR(1));
	mvwprintw(this->_wind, 1, 1, "Time: %d : %d;", l_time->tm_min, l_time->tm_sec);
	wattron(this->_wind, COLOR_PAIR(5));
	mvwprintw(this->_wind, 1, 30, "Score: %d", this->_score);
	wattron(this->_wind, COLOR_PAIR(2));
	mvwprintw(this->_wind, 1, 70, "Lifes: %d", this->_hero.getHP());
	wattron(this->_wind, COLOR_PAIR(4));
	mvwprintw(this->_wind, 1, 101, "Rockets left: %d", (200 - this->_r_Nbr));
	wattron(this->_wind, COLOR_PAIR(5));
}
