
#include "Convert.hpp"

int     main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Please, enter just 1 argument" << std::endl;
    } else {
        Convert arg(argv[1]);
        
        std::cout << "char: ";
        try {
            arg.toChar();
            std::cout << "'" << arg.getChar() << "'" << std::endl;
        }
        catch (Convert::ImposibleExp &e) {
            std::cout << e.what() << std::endl;
        }
        catch (Convert::NotPrintableExp &e) {
            std::cout << e.what() << std::endl;
        }
        
        std::cout << "int: ";
        try {
            arg.toInt();
            std::cout << arg.getInt() << std::endl;
        }
        catch (Convert::ImposibleExp &e) {
            std::cout << e.what() << std::endl;
        }
        
        std::cout << "float: ";
        try {
            arg.toFloat();
            std::cout << std::fixed << std::setprecision(1) << arg.getFloat() << 'f' << std::endl;
        } 
        catch (Convert::ImposibleExp &e) {
            std::cout << e.what() << std::endl;
        }
        
        std::cout << "double: ";
        try {
            arg.toDouble();
            std::cout << arg.getDouble() << std::endl;
        } 
        catch (Convert::ImposibleExp &e) {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}
