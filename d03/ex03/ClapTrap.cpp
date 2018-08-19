
#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() {
	std::cout << "FR4G-TP ClapTrap Bot has been deleted" << std::endl;
};

ClapTrap::ClapTrap() {
	this->hit_points = 0;
	this->max_hit_points = 0;
	this->energy_points = 0;
	this->max_energy_points = 0;
	this->level = 0;
	this->name = "none";
	this->melee_attack_damage = 0;
	this->ranged_attack_damage = 0;
	this->armor_damage_reduction = 0;
	std::cout << "FR4G-TP ClapTrap Bot has been created" << std::endl;
};

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->hit_points = 0;
	this->max_hit_points = 0;
	this->energy_points = 0;
	this->max_energy_points = 0;
	this->level = 0;
	this->melee_attack_damage = 0;
	this->ranged_attack_damage = 0;
	this->armor_damage_reduction = 0;
	std::cout << "FR4G-TP ClapTrap Bot " << this->name << " has been created" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &object) {
	*this = object;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & object) {
	std::cout << "FR4G-TP Bot " << object.name << " clone has been created" << std::endl;
	if (this != &object) {
		this->name = object.name;
	}
	return (*this);
};



void ClapTrap::setName(std::string name) {
	std::cout << "FR4G-TP Bot " << this->name << " change his name to " << name << std::endl;
	this->name = name;
};

std::string ClapTrap::getName() const{
	return (this->name);
};



void ClapTrap::takeDamage(unsigned int amount) {
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

void ClapTrap::beRepaired(unsigned int amount) {
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


