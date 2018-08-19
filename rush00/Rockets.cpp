/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rockets.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:14:08 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:14:13 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rockets.hpp"

Rockets::Rockets(void) {
	this->_form = '-';
	this->_HP = 1;
	this->_alive = 1;
}

Rockets::Rockets(Rockets const & src) {
	*this = src;
}

Rockets::~Rockets(void) {
	return ;
}

Rockets		& Rockets::operator= (Rockets const & src) {
	return (*this);
}

