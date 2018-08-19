
#include "Zombie.hpp"

void	Zombie::announce() {
	std::cout << "<" << this->name << " (" << this->type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}
void	Zombie::setType(std::string type) {
	this->type = type;
}

Zombie::Zombie() {};

Zombie::Zombie(std::string name) {
	this->name = name;
};

Zombie::Zombie(std::string name, std::string type) {
	this->name = name;
	this->type = type;
};

Zombie::~Zombie(){};