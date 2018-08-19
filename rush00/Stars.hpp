/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stars.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:18:38 by iosypenk          #+#    #+#             */
/*   Updated: 2018/06/24 22:18:44 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STARS_H

# define STARS_H

#include "SpaceObject.hpp"

class	Stars : public SpaceObject {

	public:
		Stars(void);
		Stars(Stars const & src);
		~Stars(void);

		Stars		& operator= (Stars const & src);
	
};

#endif
