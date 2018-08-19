/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rockets.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:13:40 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:13:51 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROCKETS_H

# define ROCKETS_H

#include "header.hpp"
#include "SpaceObject.hpp"

class	Rockets : public SpaceObject {

	public:
		Rockets(void);
		Rockets(Rockets const & src);
		~Rockets(void);

		Rockets		& operator= (Rockets const & src);
};

#endif
