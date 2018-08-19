#include "Form.hpp"

Form::Form(void) : _name("none"), _signed(false), _grade_to_sign(1), _grade_to_execute(1) {
    return ;
};

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute) {
    if (this->_grade_to_sign < 1 || this->_grade_to_execute < 1) {
        throw Form::GradeTooHighException();
    } else if (this->_grade_to_sign > 150 || this->_grade_to_execute > 150) {
        throw Form::GradeTooLowException();
    }
    return ;
};

Form::Form(const Form &obj) : _name(obj.getName()), _signed(obj.getSigned()), _grade_to_sign(obj.getGradeToSign()), _grade_to_execute(obj.getGradeToExecute()) {
    *this = obj;
    return ;
};

Form::~Form(void) {
    return ;
};

Form &Form::operator = (const Form &obj) {
    if (this != &obj) {
        this->_signed = obj.getSigned();
    }
    return (*this);
};




Form::GradeTooHighException::GradeTooHighException(void) {
    return ;
};

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj) {
    *this = obj;
    return ;
};

Form::GradeTooHighException::~GradeTooHighException(void) throw() {
    return ;
};

Form::GradeTooHighException &Form::GradeTooHighException::operator = (const GradeTooHighException &) {
    return (*this);
};

const char *Form::GradeTooHighException::what() const throw() {
    return ("grade is too high.");
};




Form::GradeTooLowException::GradeTooLowException(void) {
    return ;
};

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj) {
    *this = obj;
    return ;
};

Form::GradeTooLowException::~GradeTooLowException(void) throw() {
    return ;
};

Form::GradeTooLowException &Form::GradeTooLowException::operator= (const GradeTooLowException &) {
    return (*this);
};

const char *Form::GradeTooLowException::what() const throw() {
    return ("grade is too low.");
};




void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_grade_to_sign) {
        throw Form::GradeTooLowException();
    } else {
        this->_signed = true;
    }
    return ;
};

bool Form::getSigned(void) const {
    return (this->_signed);
};

int Form::getGradeToSign(void) const {
    return (this->_grade_to_sign);
};

int
Form::getGradeToExecute(void) const {
    return (this->_grade_to_execute);
};

std::string Form::getName(void) const {
    return (this->_name);
};

std::ostream &operator << (std::ostream &stream, const Form &obj) {
    stream << "Form " << obj.getName() << " is " << (obj.getSigned() ? "" : "not ") << "signed. It requires a grade " << obj.getGradeToSign() << " to sign, and " << obj.getGradeToExecute() << " to be executed.";
    return (stream);
}