
#include "Form.hpp"
#include "Bureaucrat.hpp"

void checkForm(Bureaucrat bureaucrat, Form form) {
    try {
        bureaucrat.signForm(form);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        form.beSigned(bureaucrat);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return ;
}

int main(void) {
    Form        f1 = Form("Form #1", 1, 1);
    Form        f2 = Form("Form #2", 149, 149);
    Bureaucrat  b1 = Bureaucrat("ololosha", 1);
    Bureaucrat  b2 = Bureaucrat("avgustin", 150);

    checkForm(b1, f1);
    std::cout << std::endl;

    checkForm(b1, f2);
    std::cout << std::endl;

    checkForm(b2, f1);
    std::cout << std::endl;

    checkForm(b2, f2);

    return (0);
}