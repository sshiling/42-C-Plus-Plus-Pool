#include "Human.hpp"


void Human::meleeAttack(std::string const & target) {
	std::cout << "Holy crap... " << target << std::endl;
};
void Human::rangedAttack(std::string const & target) {
	std::cout << "OMG... " << target << std::endl;
};
void Human::intimidatingShout(std::string const & target) {
	std::cout << "Ololoshki... " << target << std::endl;
};

void Human::action(std::string const & action_name, std::string const & target) {
	void (Human::*attacks[3])(std::string const & target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	 std::string attackNames[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; i++)
		if (attackNames[i] == action_name)
			(this->*attacks[i])(target);
};