/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 10:38:31 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/21 10:38:32 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include "Space.hpp"
#include "SpaceObject.hpp"
#include "BattleShip.hpp"

int		main(void) {

	Space	game;
	srand(time(0));
	game.lifecircle();
	return (0);
}
