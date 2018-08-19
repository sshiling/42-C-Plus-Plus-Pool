#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string);
		~Weapon();

		std::string const& getType(void);
		void setType(std::string str);
};

#endif