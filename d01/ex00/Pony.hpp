#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony {
	private:
		std::string color;
		std::string name;
	public:
		Pony();
		Pony(std::string name, std::string color);
		~Pony();

		void say_hi();
};

#endif