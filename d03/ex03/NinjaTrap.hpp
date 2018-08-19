#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap {

	public:

		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & object);
		~NinjaTrap(void);

		NinjaTrap & operator=(NinjaTrap const & object);


		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);

		void ninjaShoebox(ClapTrap const & target);
		void ninjaShoebox(FragTrap const & target);
		void ninjaShoebox(ScavTrap const & target);
		void ninjaShoebox(NinjaTrap const & target);
};

#endif