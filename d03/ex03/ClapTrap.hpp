#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class	ClapTrap {
	protected:

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

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & object);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const & object);

		void setName(std::string name);
		std::string getName(void) const;

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif