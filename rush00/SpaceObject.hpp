/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceObject.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:14:39 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:14:46 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACEOBJECT_H

# define SPACEOBJECT_H

#include "header.hpp"

class	SpaceObject {

	public:
		SpaceObject(void);
		SpaceObject(SpaceObject const & src);
		~SpaceObject(void);

		SpaceObject		& operator= (SpaceObject const & src);

		char			getForm(void) const;
		void			setForm(char form);

		int				getHP(void) const;
		void			setHP(int hp);

		int				getX1(void) const;
		int				getX2(void) const;
		void			setX(int x);

		int				getY1(void) const;
		int				getY2(void) const;
		void			setY(int y);

		bool			getAlive(void) const;
		void			setAlive(bool n);


	protected:
		char			_form;
		int				_HP;

		int 			_x1;
		int 			_x2;

		int				_y1;
		int				_y2;

		bool			_alive;
};

#endif
