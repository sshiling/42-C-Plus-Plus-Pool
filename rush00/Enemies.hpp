/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemies.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:13:07 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:13:11 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMIES_H

# define ENEMIES_H

#include "header.hpp"
#include "SpaceObject.hpp"

class	Enemies : public SpaceObject {

	public:
		Enemies(void);
		Enemies(Enemies const & src);
		~Enemies(void);

		Enemies		& operator= (Enemies const & src);
};

#endif
