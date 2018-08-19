#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain {
	private:
		std::string const brain_addr;
	public:
		Brain();
		~Brain();

		std::string const identify(void) const;
};

#endif