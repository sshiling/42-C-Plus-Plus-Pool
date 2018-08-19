
#include "HumanB.hpp"

HumanB::HumanB(std::string str) {
	this->name = str;
};
HumanB::~HumanB(){};

void	HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->type->getType() << std::endl; 
};

void	HumanB::setWeapon(Weapon &type) {
	this->type = &type;
};