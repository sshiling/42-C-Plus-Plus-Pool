/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceObject.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:14:24 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:14:28 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpaceObject.hpp"

SpaceObject::SpaceObject(void) {
	
	this->_form = '.';
	this->_HP = 0;
	this->_alive = 0;
}

SpaceObject::SpaceObject(SpaceObject const & src) {
	*this = src;
}

SpaceObject::~SpaceObject(void) {
	return ;
}

SpaceObject		& SpaceObject::operator= (SpaceObject const & src) {
	
	return (*this);
}
char			SpaceObject::getForm(void) const { return (this->_form); }
void			SpaceObject::setForm(char form) { this->_form = form; }

int				SpaceObject::getHP(void) const { return (this->_HP); }
void			SpaceObject::setHP(int	hp) { this->_HP = hp; }

int				SpaceObject::getX1(void) const { return (this->_x1); }
int				SpaceObject::getX2(void) const { return (this->_x2); }
void			SpaceObject::setX(int x) { this->_x1 = x; this->_x2 = x + 1; }

int				SpaceObject::getY1(void) const { return (this->_y1); }
int				SpaceObject::getY2(void) const { return (this->_y2); }
void			SpaceObject::setY(int y) { this->_y1 = y; this->_y2 = y + 1; }

bool			SpaceObject::getAlive(void) const { return this->_alive; }
void			SpaceObject::setAlive(bool n) { this->_alive = n; }

