#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		static int const	bit;
		int					raw;

	public:
		static Fixed		&min(Fixed &val1, Fixed &val2);
		static Fixed		&max(Fixed &val1, Fixed &val2);
		static Fixed const	&min(Fixed const &val1, Fixed const &val2);
		static Fixed const	&max(Fixed const &val1, Fixed const &val2);

		Fixed(void);
		Fixed(int i);
		Fixed(float f);
		Fixed(Fixed const & object);
		~Fixed(void);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		Fixed				&operator=(Fixed const & object);
		Fixed				&operator+(Fixed const &object) const;
		Fixed				&operator-(Fixed const &object) const;
		Fixed				&operator*(Fixed const &object) const;
		Fixed				&operator/(Fixed const &object) const;
		Fixed				&operator++(void);
		Fixed				&operator++(int);
		Fixed				&operator--(void);
		Fixed				&operator--(int);

		bool				operator>(Fixed const &object) const;
		bool				operator<(Fixed const &object) const;
		bool				operator>=(Fixed const &object) const;
		bool				operator<=(Fixed const &object) const;
		bool				operator==(Fixed const &object) const;
		bool				operator!=(Fixed const &object) const;
};

std::ostream				&operator<<(std::ostream &stream, Fixed const &object);

#endif