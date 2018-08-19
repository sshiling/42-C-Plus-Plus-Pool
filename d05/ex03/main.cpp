
#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    rrf = someRandomIntern.makeForm("Hello World!", "Bender");

    return (0);
}