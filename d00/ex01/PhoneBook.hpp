#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cctype>
# include <string>

class PhoneBook
{

private:

	int 		index;
	std::string	first_name;
	std::string	last_name;
 	std::string	nickname;
 	std::string	login;
 	std::string	postal_address;
 	std::string	email_address;
 	std::string	phone_number;
 	std::string	birthday_date;
 	std::string	favorite_meal;
 	std::string	underwear_color;
 	std::string	darkest_secret;

 	void	readline(std::string text, std::string *param);
 	std::string create_output(std::string text);

public:

	void	add_contact(int i);
	void	print_each_contact(void);
};

#endif
