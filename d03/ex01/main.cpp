
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int  main() {
	srand (time(NULL));
	std::cout << ">>> Start <<<" << std::endl;
	FragTrap bot1("ololoshka");
	ScavTrap bot2("ololosik");
	bot1.setName("Bot#1");
	bot2.setName("Bot#2");

	std::cout << std::endl << "> Fight:" << std::endl;
	bot1.rangedAttack("Bot#2");
	bot2.takeDamage(20);
	bot1.meleeAttack("Bot#2");
	bot2.takeDamage(30);

	std::cout << std::endl << "> Kill Bot#1:" << std::endl;
	bot1.takeDamage(105);
	bot1.takeDamage(105);

	std::cout << std::endl << "> Heal:" << std::endl;
	bot2.beRepaired(35);
	bot1.beRepaired(100);
	bot1.beRepaired(100);

	std::cout << std::endl << "> Random attacks:" << std::endl;
	bot1.vaulthunter_dot_exe("Bot#2");
	bot2.challengeNewcomer();
	bot1.vaulthunter_dot_exe("Bot#2");
	bot2.challengeNewcomer();
	bot1.vaulthunter_dot_exe("Bot#2");
	bot2.challengeNewcomer();
	bot1.vaulthunter_dot_exe("Bot#2");
	bot2.challengeNewcomer();
	bot1.vaulthunter_dot_exe("Bot#2");
	bot2.challengeNewcomer();

	std::cout << std::endl << "> Very weak attack:" << std::endl;
	bot1.takeDamage(1);

	std::cout << std::endl << ">>> End <<<" << std::endl;
	return 0;
}