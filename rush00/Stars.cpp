/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stars.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:16:23 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:16:53 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stars.hpp"

Stars::Stars(void) {

	this->_form = '.';
	this->_HP = 50;
	this->_alive = 1;
}

Stars::Stars(Stars const & src) {
	*this = src;
}

Stars::~Stars(void) { 
	return ;
}

Stars		& Stars::operator= (Stars const & src) {
	
	return (*this);
}
