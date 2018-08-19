#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {
	private:

		int					raw;
		static int const	bit;
		
	public:

		Fixed(void);
		Fixed(Fixed const & object);
		~Fixed(void);

		Fixed &		operator=(Fixed const & object);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif