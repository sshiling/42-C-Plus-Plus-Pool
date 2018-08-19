#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & object);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap const & object);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);

		void challengeNewcomer(void);
};

#endif