/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BattleShip.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:12:33 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:12:42 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BattleShip.hpp"

BattleShip::BattleShip(void) {
	this->_form = 'I';
	this->_HP = 10;
	this->_alive = 1;
}

BattleShip::BattleShip(BattleShip const & src) {
	*this = src;
}

BattleShip::~BattleShip(void) { 
	return ;
}

BattleShip		& BattleShip::operator= (BattleShip const & src) {
	return (*this);
}
