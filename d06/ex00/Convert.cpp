#include "Convert.hpp"

Convert::Convert() {};

Convert::Convert(std::string const str) : _str(str) {
	return ;
};

Convert::Convert(Convert const & tmp) { 
	*this = tmp;
};

Convert::~Convert() {
	return ;
};

Convert & Convert::operator = (Convert const & tmp) {
	if ( this != &tmp)
		*this = tmp;
	return *this;
}

void Convert::toChar() {
	errno = 0;
	if (_str.length() == 1 && !isdigit(_str[0]) && isprint(_str[0]))
		_int = _str[0];
	else
		_int = std::atoi(_str.c_str());
	if (errno)
		throw Convert::ImposibleExp();
	else if (_int < 0 || _int > 127)
		throw Convert::ImposibleExp();
	else if (_int < 32 || _int == 127)
		throw (Convert::NotPrintableExp());
}

void Convert::toInt() {
	errno = 0;
	if (_str.length() == 1 && !isdigit(_str[0]) && isprint(_str[0]))
		_int = _str[0];
	else
		_int = std::atoi(_str.c_str());
	if (errno)
		throw Convert::ImposibleExp();
}

void Convert::toFloat() {
	errno = 0;
	if (_str.length() == 1 && !isdigit(_str[0]) && isprint(_str[0]))
		_float = _str[0];
	else
		_float = std::atof(_str.c_str());
	if (errno)
		throw Convert::ImposibleExp();
}

void Convert::toDouble() {
	errno = 0;
	if (_str.length() == 1 && !isdigit(_str[0]) && isprint(_str[0]))
		_double = _str[0];
	else
		_double = std::atof(_str.c_str());
	if (errno)
		throw Convert::ImposibleExp();
}


char 	Convert::getChar(void) {
	return (static_cast<char>(this->_int));
};

int 	Convert::getInt(void) {
	return (static_cast<int>(this->_int));
};

double 	Convert::getDouble(void) {
	return (static_cast<double>(this->_double));
};

float 	Convert::getFloat(void) {
	return (static_cast<float>(this->_float));
};





Convert::ImposibleExp::ImposibleExp() {};
Convert::ImposibleExp::ImposibleExp(Convert::ImposibleExp const & tmp) {
	*this = tmp;
};

Convert::ImposibleExp::~ImposibleExp() throw () {};

Convert::ImposibleExp & Convert::ImposibleExp::operator=(Convert::ImposibleExp const & tmp) {
	if (this != &tmp)
		*this = tmp;
	return *this;
};

const char* Convert::ImposibleExp::what() const throw() {
	return ("impossible");
};




Convert::NotPrintableExp::NotPrintableExp() {};
Convert::NotPrintableExp::NotPrintableExp(Convert::NotPrintableExp const & tmp) {
	*this = tmp;
};

Convert::NotPrintableExp::~NotPrintableExp() throw () {};

Convert::NotPrintableExp & Convert::NotPrintableExp::operator=(Convert::NotPrintableExp const & tmp) {
	if (this != &tmp)
		*this = tmp;
	return *this;
};

const char* Convert::NotPrintableExp::what() const throw() {
	return ("Non displayable");
};
