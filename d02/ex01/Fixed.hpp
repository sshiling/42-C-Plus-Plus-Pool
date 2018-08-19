#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {
	private:

		int					raw;
		static int const	bit;

	public:

		Fixed(void);
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const & object);
		~Fixed(void);

		Fixed &	operator=(Fixed const & object);

		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & stream, Fixed const & object);

#endif