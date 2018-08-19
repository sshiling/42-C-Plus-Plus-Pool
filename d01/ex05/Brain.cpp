#include "Brain.hpp"

Brain::Brain(){};
Brain::~Brain(){};

std::string const Brain::identify(void) const {
	std::stringstream	brain;

	brain << this;
	std::string brain_addr = brain.str();
	return (brain_addr);
}