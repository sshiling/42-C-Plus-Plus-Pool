#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class	ScavTrap {
	private:

		int hit_points;
		int max_hit_points;
		int energy_points;
		int max_energy_points;
		int level;
		std::string name;
		int melee_attack_damage;
		int ranged_attack_damage;
		int armor_damage_reduction;

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & object);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap const & object);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void challengeNewcomer(void);

		void setName(std::string name);
};

#endif