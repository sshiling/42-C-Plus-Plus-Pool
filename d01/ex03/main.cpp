

#include "ZombieHorde.hpp"

int		main(void) {
	srand (time(NULL));
	ZombieHorde zombies(8);
	zombies.announce();
	return (0);
}