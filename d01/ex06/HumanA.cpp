
#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& type) : name(str), type(type) {};
HumanA::~HumanA(){};

void	HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->type.getType() << std::endl; 
}