#include "Weapon.hpp"

Weapon::Weapon(){
	this->type = "none";
};
Weapon::Weapon(std::string str){
	this->type = str;
};
Weapon::~Weapon(){};

std::string const& Weapon::getType(void) {
	return (this->type);
};

void Weapon::setType(std::string str) {
	this->type = str;
};