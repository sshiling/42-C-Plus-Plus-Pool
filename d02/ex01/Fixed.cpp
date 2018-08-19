
#include "Fixed.hpp"

int	const	Fixed::bit = 8;

Fixed::Fixed(void) {
	this->raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(i << bit);
}

Fixed::Fixed(float const f) {
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(f * (1 << bit)));
}

Fixed::Fixed(Fixed const & object) {
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	return this->raw;
}

void    Fixed::setRawBits(int const raw) {
	this->raw = raw;
}

int		Fixed::toInt(void) const {
	return (getRawBits() >> this->bit);
}

float	Fixed::toFloat(void) const {
	float	f;

	f = getRawBits();
	return (f / (1 << this->bit));
}

Fixed &	Fixed::operator=(Fixed const & object) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &object)
		this->raw = object.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & stream, Fixed const & object) {
	stream << object.toFloat();
	return stream;
}