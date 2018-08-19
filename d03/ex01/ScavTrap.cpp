
#include "ScavTrap.hpp"

ScavTrap::~ScavTrap() {
	std::cout << "FR4G-TP ScavTrap Bot " << this->name << " has been deleted" << std::endl;
};

ScavTrap::ScavTrap() {
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->name = "none";
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
	std::cout << "FR4G-TP ScavTrap Bot " << this->name << " has been created" << std::endl;
};

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
	std::cout << "FR4G-TP ScavTrap Bot " << this->name << " has been created" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap const &object) {
	*this = object;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & object) {
	std::cout << "FR4G-TP Bot " << object.name << " clone has been created" << std::endl;
	if (this != &object) {
		this->hit_points = object.hit_points;
		this->max_hit_points = object.max_hit_points;
		this->energy_points = object.energy_points;
		this->max_energy_points = object.max_energy_points;
		this->level = object.level;
		this->name = object.name;
		this->melee_attack_damage = object.melee_attack_damage;
		this->ranged_attack_damage = object.ranged_attack_damage;
		this->armor_damage_reduction = object.armor_damage_reduction;
	}
	return (*this);
};

void ScavTrap::setName(std::string name) {
	std::cout << "FR4G-TP Bot " << this->name << " change his name to " << name << std::endl;
	this->name = name;
};

void ScavTrap::rangedAttack(std::string const & target) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and can't attack" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP ScavTrap " << this->name << " attacks " << target << " at range, causing " << this->ranged_attack_damage << " points of damage !" << std::endl; 
};

void ScavTrap::meleeAttack(std::string const & target) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and can't attack" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP ScavTrap " << this->name << " attacks " << target << " at melee, causing " << this->melee_attack_damage << " points of damage !" << std::endl;
};

void ScavTrap::takeDamage(unsigned int amount) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead" << std::endl;
		return ;
	}
	if ((int)amount <= armor_damage_reduction) {
		std::cout << "FR4G-TP " << this->name << " wasn't damaged" << std::endl;
		return ;
	}
	if (hit_points <= ((int)amount - armor_damage_reduction)) {
		std::cout << "FR4G-TP " << this->name << " has just been killed" << std::endl;
		hit_points = 0;
		return ;
	} else {
		hit_points -= ((int)amount - armor_damage_reduction);
		std::cout << "FR4G-TP " << this->name << " got " << (int)amount - armor_damage_reduction << " damage. Current HP: " << this->hit_points << std::endl;
	}
};

void ScavTrap::beRepaired(unsigned int amount) {
	if (hit_points == max_hit_points) {
		std::cout << "FR4G-TP " << this->name << " HP is already full" << std::endl;
		return ;
	}
	if ((hit_points + (int)amount) >= max_hit_points) {
		std::cout << "FR4G-TP " << this->name << " has been fully healed" << std::endl;
		hit_points = max_hit_points;
		return ;
	} else {
		hit_points += amount;
		std::cout << "FR4G-TP " << this->name << " has been healed for +" << amount << " HP" << std::endl;
	}
};

void ScavTrap::challengeNewcomer() {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and can't create random events" << std::endl;
		return ;
	}
	std::string eventNames[8] = {"Ha ha ha", "You shell not pass!!!", "Ups... Almost kill me", "Come on. That's all that you can do?", "Random cat has been born somewhere", "It's not funny", "Catch your pants", "ohoho"};
	std::cout << "FR4G-TP " << eventNames[rand() % 7] << std::endl;
};


