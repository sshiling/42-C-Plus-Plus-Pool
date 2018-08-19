#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent {
	private:
		std::string type;
	public:
		void	setZombieType(Zombie* zombie, std::string type);
		Zombie*	newZombie(std::string name);
		void	randomChump(void);
};

#endif