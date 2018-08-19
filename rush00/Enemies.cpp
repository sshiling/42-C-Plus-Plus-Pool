/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemies.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:13:17 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:13:28 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemies.hpp"

Enemies::Enemies(void) {

	this->_form = '#';
	this->_HP = 1;
}

Enemies::Enemies(Enemies const & src) {
	*this = src;
}

Enemies::~Enemies(void) { 
	return ;
}

Enemies		& Enemies::operator= (Enemies const & src) {

	return (*this);
}
