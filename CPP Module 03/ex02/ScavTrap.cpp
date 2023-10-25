#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor has been called" << std::endl;
	this->Hit_point = 100;
	this->Energie_point = 50;
	this->attack_damage = 20;
	class_name = "ScavTrap ";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name modifying constructor has been called" << std::endl;
	this->Hit_point = 100;
	this->Energie_point = 50;
	this->attack_damage = 20;
	class_name = "ScavTrap ";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor has been called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->Energie_point > 0 && this->Hit_point > 0)
	{ 
		this->Energie_point--;
		std::cout << class_name << Name << BLUE_TEXT << " attacks " << RESET_TEXT
		<< target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	}
}
