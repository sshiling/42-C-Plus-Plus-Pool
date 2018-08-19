#include "Intern.hpp"

Intern::Intern(void) {
    _func[0] = &Intern::_newPresidentialPardonForm;
    _func[1] = &Intern::_newRobotomyRequestForm;
    _func[2] = &Intern::_newShrubberyCreationForm;
    return ;
}

Intern::Intern(const Intern &obj) {
    *this = obj;
    return ;
}

Intern::~Intern(void) {
    return ;
}

Intern &Intern::operator= (const Intern &) {
    return (*this);
}

std::string Intern::_names[3] = { "presidential pardon", "robotomy request", "shrubbery creation" };


Form* Intern::makeForm(std::string name, std::string target) {
    try {
        return _searchForm(name, target);
    }
    catch (std::exception &e) {
        std::cout << name << " : form not found" << std::endl;
        return NULL;
    }
}

Form* Intern::_searchForm(std::string name, std::string target) {
    for (int i = 0; i < 3; i++) {
        if (name == this->_names[i]) {
            std::cout << "Intern creates " << name << std::endl; 
            return (this->*_func[i])(target);
        }
    }
    std::cout << "Form not found" << std::endl;
    return (NULL);
}

Form* Intern::_newPresidentialPardonForm(std::string target) {
    return (new PresidentialPardonForm(target));
}

Form* Intern::_newRobotomyRequestForm(std::string target) {
    return (new RobotomyRequestForm(target));
}

Form* Intern::_newShrubberyCreationForm(std::string target) {
    return (new ShrubberyCreationForm(target));
}