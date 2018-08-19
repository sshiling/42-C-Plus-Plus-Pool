#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
	private:
		int	num;
		Zombie* zombies;

	public:
		ZombieHorde(int N);
		~ZombieHorde();

		void	announce();
};

#endif