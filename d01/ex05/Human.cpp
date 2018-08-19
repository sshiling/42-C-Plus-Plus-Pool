#include "Human.hpp"

Human::Human(void) {};

Human::~Human(void) {};

Brain const& Human::getBrain(void) {
	return (my_brain);
}


std::string Human::identify(void) {
	return (my_brain.identify());
}
