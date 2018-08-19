#include <iostream>

int main() {
	std::string 	string = "HI THIS IS BRAIN";
	std::string* 	stringPtr = &string;
	std::string& 	stringRef = string;

	std::cout << *stringPtr << std::endl;
	std::cout << stringRef << std::endl;
	return (0);
}