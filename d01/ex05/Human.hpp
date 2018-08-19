#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
	private:
		Brain const my_brain;

	public:
		Human();
		~Human();

		Brain const& getBrain(void);
		std::string identify(void);
};

#endif