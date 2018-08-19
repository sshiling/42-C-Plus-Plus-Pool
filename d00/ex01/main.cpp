
#include "PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook	contacts[8];

	for (int i = 0; i < 8 + 1;)
	{
		std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
		if (!(std::getline(std::cin, command)))
			return (0);
		if (!command.compare("ADD") && i < 8) {
			contacts[i].add_contact(i + 1);
			i++;
		}
		else if (!command.compare("ADD"))
			std::cout << "Sorry, phone book is full" << std::endl;
		else if (!command.compare("EXIT")) {
			break ;
		}
		else if (!command.compare("SEARCH")) {
			std::cout << "|     index|" << "first name|" << " last name|" << "  nickname|" << std::endl;
			for (int j = 0; j < i; j++) {
				contacts[j].print_each_contact();
			}
			std::cout << "Enter index you want to leave:" << std::endl;
			if (!(std::getline(std::cin, command)))
				return (0);
			int k = atoi(command.c_str());
			if (k < 1 || k > i)
				std::cout << "You entered invalid index" << std::endl;
			else {
				std::cout << "|     index|" << "first name|" << " last name|" << "  nickname|" << std::endl;
				contacts[k - 1].print_each_contact();
			}
		}
		else {
			std::cout << "Please enter a valid command" << std::endl;
		}
	}
	return 0;
}