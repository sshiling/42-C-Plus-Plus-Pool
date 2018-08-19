
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void) {
	Zombie zombies[8];

	srand (time(NULL));
	ZombieEvent event;
	event.randomChump();
	event.randomChump();
	event.randomChump();
	event.randomChump();

	for (int i = 0; i < 8; i++) {
		zombies[i].setName("bot");
		zombies[i].setType("kompott");
	}
	for (int i = 0; i < 8; i++) {
		zombies[i].announce();
	}
	return (0);
}