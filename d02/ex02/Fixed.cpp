
#include "Fixed.hpp"

int	const Fixed::bit = 8;

Fixed::Fixed(void) {
	this->raw = 0;
}

Fixed::Fixed(Fixed const &object) {
	*this = object;
}

Fixed::Fixed(int i) {
	this->raw = i << this->bit;
}

Fixed::Fixed(float f) {
	this->raw = (int)roundf(f * (1 << this->bit));
}

Fixed::~Fixed() {};




Fixed 	&Fixed::min(Fixed &val1, Fixed &val2) {
	return ((val1.getRawBits() < val2.getRawBits()) ? val1 : val2);
}

Fixed const	&Fixed::min(Fixed const &val1, Fixed const &val2) {
	return ((val1.getRawBits() < val2.getRawBits()) ? val1 : val2);
}

Fixed 	&Fixed::max(Fixed &val1, Fixed &val2) {
	return ((val1.getRawBits() > val2.getRawBits()) ? val1 : val2);
}

Fixed const	&Fixed::max(Fixed const &val1, Fixed const &val2) {
	return ((val1.getRawBits() > val2.getRawBits()) ? val1 : val2);
}




int		Fixed::getRawBits(void) const {
	return this->raw;
}

void	Fixed::setRawBits(int const raw) {
	this->raw = raw;
}

int		Fixed::toInt(void) const {
	return (this->raw >> this->bit);
}

float	Fixed::toFloat(void) const {
	return (((float)this->raw) / (1 << this->bit));
}

Fixed	&Fixed::operator = (Fixed const &object) {
	if (this != &object)
		this->raw = object.getRawBits();
	return (*this);
}




Fixed	&Fixed::operator + (Fixed const &object) const {
	Fixed	*sum = new Fixed();

	sum->raw = this->raw + object.getRawBits();
	return (*sum);
}

Fixed	&Fixed::operator - (Fixed const &object) const {
	Fixed	*diff = new Fixed();

	diff->raw = this->raw - object.getRawBits();
	return (*diff);
}

Fixed	&Fixed::operator * (Fixed const &object) const {
	return (*new Fixed(this->toFloat() * object.toFloat()));
}

Fixed	&Fixed::operator / (Fixed const &object) const {
	return (*new Fixed(this->toFloat() / object.toFloat()));
}

Fixed	&Fixed::operator ++ (void) {
	this->raw++;
	return (*this);
}

Fixed	&Fixed::operator ++ (int) {
	Fixed	*copy = new Fixed(*this);
	operator++();
	return (*copy);
}

Fixed	&Fixed::operator -- (void) {
	this->raw--;
	return (*this);
}

Fixed	&Fixed::operator -- (int) {
	Fixed		*copy = new Fixed(*this);
	operator--();
	return (*copy);
}




bool	Fixed::operator > (Fixed const &object) const {
	return (this->raw > object.getRawBits());
}

bool	Fixed::operator < (Fixed const &object) const {
	return (this->raw < object.getRawBits());
}

bool	Fixed::operator >= (Fixed const &object) const {
	return (this->raw >= object.getRawBits());
}

bool	Fixed::operator <= (Fixed const &object) const {
	return (this->raw <= object.getRawBits());
}

bool	Fixed::operator == (Fixed const &object) const {
	return (this->raw == object.getRawBits());
}

bool	Fixed::operator != (Fixed const &object) const {
	return (this->raw != object.getRawBits());
}




std::ostream & operator<<(std::ostream &stream, Fixed const &object) {
	stream << object.toFloat();
	return (stream);
}
