
#include "Bureaucrat.hpp"

int     main(void) {
    Bureaucrat    ololoshka("Ololoshka", 100);

    try {
        for (int i = 1; i < 10; i++) {
            ololoshka.setGrade(i);
            std::cout << ololoshka <<std::endl;
        }
        std::cout << std::endl;
        for (int i = 140; i < 160; i++) {
            ololoshka.setGrade(i);
            std::cout << ololoshka <<std::endl;
        }
        std::cout << std::endl; 
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }



    try {
        for (int i = -1; i < 10; i++) {
            ololoshka.setGrade(i);
            std::cout << ololoshka <<std::endl;
        }        
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}