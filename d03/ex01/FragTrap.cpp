
#include "FragTrap.hpp"

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP FragTrap Bot " << this->name << " has been deleted" << std::endl;
};

FragTrap::FragTrap() {
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->name = "none";
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
	std::cout << "FR4G-TP FragTrap Bot " << this->name << " has been created" << std::endl;
};

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
	std::cout << "FR4G-TP FragTrap Bot " << this->name << " has been created" << std::endl;
};

FragTrap::FragTrap(FragTrap const &object) {
	*this = object;
}

FragTrap & FragTrap::operator=(FragTrap const & object) {
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

void FragTrap::setName(std::string name) {
	std::cout << "FR4G-TP Bot " << this->name << " change his name to " << name << std::endl;
	this->name = name;
};

void FragTrap::rangedAttack(std::string const & target) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and can't attack" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP FragTrap " << this->name << " attacks " << target << " at range, causing " << this->ranged_attack_damage << " points of damage !" << std::endl; 
};

void FragTrap::meleeAttack(std::string const & target) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and can't attack" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP FragTrap " << this->name << " attacks " << target << " at melee, causing " << this->melee_attack_damage << " points of damage !" << std::endl;
};

void FragTrap::takeDamage(unsigned int amount) {
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

void FragTrap::beRepaired(unsigned int amount) {
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

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string attackNames[8] = {"bloodyHellAttack", "holyCrapAttack", "ohMyAttack", "someStupidAttack", "ololoshkiAttack", "jonnyGoHomeAttack", "42Attack", "haHa"};
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and can't do random attack" << std::endl;
		return ;
	}
	if (energy_points < 25) {
		std::cout << "FR4G-TP " << this->name << " is lack of energy and can't do random attack" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at " << attackNames[rand() % 7] << ", causing 1 point of damage !" << std::endl;
	hit_points -= 1;
	energy_points -= 25;
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " has just been killed" << std::endl;
		hit_points = 0;
		return ;		
	}
};


