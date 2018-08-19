#include "PhoneBook.hpp"

void	PhoneBook::readline(std::string text, std::string *param) {
	std::cout << "Please enter " << text << ":" << std::endl;
	if (!(std::getline (std::cin, *param)))
		exit(-1);		
}

void	PhoneBook::add_contact(int i) {
	index = i;

	readline("first name", &first_name);
	readline("last name", &last_name);
	readline("nick name", &nickname);
	readline("login", &login);
	readline("postal address", &postal_address);
	readline("email address", &email_address);
	readline("phone number", &phone_number);
	readline("birthday date", &birthday_date);
	readline("favorite meal", &favorite_meal);
	readline("underwear color", &underwear_color);
	readline("darkest secret", &darkest_secret);
};

std::string PhoneBook::create_output(std::string text) {
	std::string str;

	if(text.length() > 10) {
		std::string str = text.substr(0,9);
		str = str + '.';
		return(str);
	}
	if(text.length() < 10) {
		std::string str1 (10 - text.length(), ' ');
		str = str1 + text;
		return(str);
	}
	return(text);
}

void	PhoneBook::print_each_contact(void) {
	std::cout << "|         " << index << "|";
	std::cout << create_output(first_name) << "|";
	std::cout << create_output(last_name) << "|"; 
	std::cout << create_output(nickname) << "|" << std::endl;
}