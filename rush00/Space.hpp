/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Space.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 09:47:50 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/22 09:47:51 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACE_H

# define SPACE_H

#include "BattleShip.hpp"
#include "Rockets.hpp"
#include "Enemies.hpp"
#include "Stars.hpp"

# define LEFT 0
# define RIGHT this->_maxW - 1
# define UP 1
# define DOWN this->_maxH - 1

class	Space {

	public:
		Space(void);
		Space(Space const & src);
		~Space(void);

		Space		& operator= (Space const & src);

		void		init_vis(void);
		void		check_initscr(void);
		void		init_colors(void);
		void		print_info(void);

		void		refresh_Rocket(int nb);
		void		refresh_eRocket(int nb);
		void		refresh_Enemy(int y, int x);
		void		refreshStars(int key);
		void		lifecircle(void);
		bool		check_colisions(Enemies & n_enemy);
		bool		check_colisions(Rockets & n_enemy);

	private:
		WINDOW		*_wind;
		WINDOW		*_conf;
		int			_win_maxW;
		int			_win_maxH;
		int			_maxW;
		int			_maxH;
		BattleShip	_hero;
		bool		_stop;
		Rockets		_rockets[200];
		Rockets 	_eRockets[20];
		Enemies		_bad[100];
		Stars		_stars[100];
		int			_r_Nbr;
		long long	_time;
		long long 	_score;
		static		time_t _t;
};

#endif