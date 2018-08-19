#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie {
	private:
		std::string name;
		std::string type;
	public:
		Zombie(std::string name, std::string type);
		Zombie(std::string name);
		Zombie();
		~Zombie();

		void	announce();
		void	setName(std::string name);
		void	setType(std::string type);
};

#endif