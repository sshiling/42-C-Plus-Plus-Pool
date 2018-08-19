/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BattleShip.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:12:49 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:12:56 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BATTLESHIP_H

# define BATTLESHIP_H

#include "SpaceObject.hpp"

class	BattleShip : public SpaceObject {

	public:
		BattleShip(void);
		BattleShip(BattleShip const & src);
		~BattleShip(void);

		BattleShip		& operator= (BattleShip const & src);
	
};


#endif
