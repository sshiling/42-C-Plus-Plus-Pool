
#include "Fixed.hpp"

int	const	Fixed::bit = 8;

Fixed::Fixed(void) {
	this->raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & object) {
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed::~Fixed(void) {
	std::cout << "destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw);
}

void    Fixed::setRawBits(int const raw) {
	this->raw = raw;
}

Fixed &	Fixed::operator=(Fixed const & object) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &object)
		this->raw = object.getRawBits();
	return (*this);
}