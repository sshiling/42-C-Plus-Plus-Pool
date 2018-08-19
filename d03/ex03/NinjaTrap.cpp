
#include "NinjaTrap.hpp"

NinjaTrap::~NinjaTrap() {
	std::cout << "FR4G-TP NinjaTrap Bot " << this->name << " has been deleted" << std::endl;
};

NinjaTrap::NinjaTrap() {
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->name = "none";
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
	std::cout << "FR4G-TP NinjaTrap Bot " << this->name << " has been created" << std::endl;
};

NinjaTrap::NinjaTrap(std::string name) {
	this->name = name;
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
	std::cout << "FR4G-TP NinjaTrap Bot " << this->name << " has been created" << std::endl;
};

NinjaTrap::NinjaTrap(NinjaTrap const &object) {
	*this = object;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & object) {
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

void NinjaTrap::rangedAttack(std::string const & target) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and can't attack" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP NinjaTrap " << this->name << " attacks " << target << " at range, causing " << this->ranged_attack_damage << " points of damage !" << std::endl; 
};

void NinjaTrap::meleeAttack(std::string const & target) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and can't attack" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP NinjaTrap " << this->name << " attacks " << target << " at melee, causing " << this->melee_attack_damage << " points of damage !" << std::endl;
};

void NinjaTrap::ninjaShoebox(ClapTrap const & target) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and can't attack" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP Clap Clap ClapTrap WhatewerTrap NobodycareTrap " << target.getName() << std::endl;
};

void NinjaTrap::ninjaShoebox(FragTrap const & target) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and is no more ninja" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP Frag Frag FragTrap WhatewerTrap NobodycareTrap " << target.getName() << std::endl;
};

void NinjaTrap::ninjaShoebox(ScavTrap const & target) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and is no more ninja" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP Scav Scav ScavTrap WhatewerTrap NobodycareTrap " << target.getName() << std::endl;
};

void NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
	if (hit_points == 0) {
		std::cout << "FR4G-TP " << this->name << " is aready dead and is no more ninja" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP Ninja Ninja NinjaTrap WhatewerTrap NobodycareTrap " << target.getName() << std::endl;
};
