
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("none"), _grade(150) {
    return ;
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
      this->_grade = grade;
    }
    return ;
};

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj.getName()) {
    *this = obj;
    return ;
};

Bureaucrat::~Bureaucrat(void) {
    // std::cout << "I'm dieing" << std::endl;
    return ;
};

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &obj) {
    if (this != &obj) {
        this->_grade = obj.getGrade();
    }
    return (*this);
};




Bureaucrat::GradeTooLowException::GradeTooLowException(void) {
    return ;
};

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj) {
    *this = obj;
    return ;
};

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
    return ;
};

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator = (const GradeTooLowException &) {
    return (*this);
};

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("grade is too low");
};




Bureaucrat::GradeTooHighException::GradeTooHighException(void) {
    return ;
};

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj) {
    *this = obj;
    return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
    return ;
};

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator = (const GradeTooHighException &) {
    return (*this);
};

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("grade is too high");
};




void Bureaucrat::setGrade(int grade) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        this->_grade = grade;
    }
    return ;
};

std::string Bureaucrat::getName(void) const {
    return (this->_name);
};

int Bureaucrat::getGrade(void) const {
    return (this->_grade);
};

void Bureaucrat::incrementGrade(void) {
    if (this->_grade <= 1) {
        throw Bureaucrat::GradeTooHighException();
    } else {
        this->_grade -= 1;
    }
    return ;
};

void Bureaucrat::decrementGrade(void) {
    if (this->_grade >= 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        this->_grade += 1;
    }
    return ;
};




void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
    return ;
};



void Bureaucrat::executeForm(const Form &form) {
    try {
        form.execute(*this);
        std::cout << this->_name << " executes " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << this->_name << " has failed to execute " << form.getName() << " becuase " << e.what() << std::endl;
    }
}



std::ostream &operator << (std::ostream &stream, const Bureaucrat &obj) {
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (stream);
};