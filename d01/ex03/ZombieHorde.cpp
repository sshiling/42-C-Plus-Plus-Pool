
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	this->num = N;
	this->zombies = new Zombie[N];
	std::string names[10] = {"Bob", "Sem", "Tom", "Pet", "Ket", "Fig", "Set", "Put", "Zak", "Lol"};

	for (int i = 0; i < N; i++) {
		zombies[i].setName(names[rand() % 10]);
		zombies[i].setType("ololoshki");
	}
}

ZombieHorde::~ZombieHorde() {
	delete [] zombies;
};

void	ZombieHorde::announce(void) {
	for (int i = 0; i < this->num; i++) {
		this->zombies[i].announce();
	}
}