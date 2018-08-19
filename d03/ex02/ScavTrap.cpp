
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

void ScavTrap::challengeNewcomer() {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and can't create random event" << std::endl;
		return ;
	}
	std::string eventNames[8] = {"Ha ha ha", "You shell not pass!!!", "Ups... Almost kill me", "Come on. That's all that you can do?", "Random cat has been born somewhere", "It's not funny", "Catch your pants", "ohoho"};
	std::cout << "FR4G-TP " << eventNames[rand() % 7] << std::endl;
};


