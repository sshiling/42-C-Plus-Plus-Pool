
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void    try_to_sign_form_1(Bureaucrat b, ShrubberyCreationForm f) {
    try {
        b.signForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    try_to_sign_form_2(Bureaucrat b, RobotomyRequestForm f) {
    try {
        b.signForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    try_to_sign_form_3(Bureaucrat b, PresidentialPardonForm f) {
    try {
        b.signForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    form_execute_by_1(Bureaucrat b, ShrubberyCreationForm f) {
    try {
        b.signForm(f);
        f.execute(b);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    form_execute_by_2(Bureaucrat b, RobotomyRequestForm f) {
    try {
        b.signForm(f);
        f.execute(b);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    form_execute_by_3(Bureaucrat b, PresidentialPardonForm f) {
    try {
        b.signForm(f);
        f.execute(b);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    bureaucrat_execute_form_1(Bureaucrat b, ShrubberyCreationForm f) {
    try {
        b.signForm(f);
        b.executeForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    bureaucrat_execute_form_2(Bureaucrat b, RobotomyRequestForm f) {
    try {
        b.signForm(f);
        b.executeForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
};

void    bureaucrat_execute_form_3(Bureaucrat b, PresidentialPardonForm f) {
    try {
        b.signForm(f);
        b.executeForm(f);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
};

int main(void)
{
    Bureaucrat                    Vasya("Vasya", 1);
    Bureaucrat                    Valentin("Valentin", 150);
    ShrubberyCreationForm         f1("Amazing_form");
    RobotomyRequestForm           f2("Oh_my_form");
    PresidentialPardonForm        f3("OMG_Form");

    try_to_sign_form_1(Vasya, f1);
    try_to_sign_form_2(Vasya, f2);
    try_to_sign_form_3(Vasya, f3);

    try_to_sign_form_1(Valentin, f1);
    try_to_sign_form_2(Valentin, f2);
    try_to_sign_form_3(Valentin, f3);

    form_execute_by_1(Vasya, f1);
    form_execute_by_2(Vasya, f2);
    form_execute_by_3(Vasya, f3);

    form_execute_by_1(Valentin, f1);
    form_execute_by_2(Valentin, f2);
    form_execute_by_3(Valentin, f3);

    bureaucrat_execute_form_1(Vasya, f1);
    bureaucrat_execute_form_2(Vasya, f2);
    bureaucrat_execute_form_3(Vasya, f3);

    bureaucrat_execute_form_1(Valentin, f1);
    bureaucrat_execute_form_2(Valentin, f2);
    bureaucrat_execute_form_3(Valentin, f3);
    return (0);
}