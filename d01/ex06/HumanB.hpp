#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *type;
	public:
		HumanB(std::string);
		~HumanB();

		void	attack(void);
		void	setWeapon(Weapon& type);
};

#endif