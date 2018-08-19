#include "ZombieEvent.hpp"


void	ZombieEvent::randomChump(void) {

	Zombie* randZombie;
	std::string names[10] = {"Bob", "Sem", "Tom", "Pet", "Ket", "Fig", "Set", "Put", "Zak", "Lol"};
	randZombie = this->newZombie(names[rand() % 10]);
	this->setZombieType(randZombie, "walking");
	randZombie->announce();
	delete randZombie;
	return ;
}

void	ZombieEvent::setZombieType(Zombie* zombie, std::string type) {
	zombie->setType(type);
}

Zombie*	ZombieEvent::newZombie(std::string name) {

	Zombie	*myEventZombie;
	myEventZombie = new Zombie(name);
	return (myEventZombie);
}