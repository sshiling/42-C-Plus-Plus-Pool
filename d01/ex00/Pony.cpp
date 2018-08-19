#include "Pony.hpp"

Pony::Pony(){};

Pony::Pony(std::string name, std::string color) {
	this->name = name;
	this->color = color;
	std::cout << "Pony " << this->name << " with color " << this->color << " is born" << std::endl;
}

Pony::~Pony() {
	std::cout << "Pony " << this->name << " died" << std::endl;
}

void	Pony::say_hi() {
	std::cout << "Hello from " << this->name << std::endl;
}