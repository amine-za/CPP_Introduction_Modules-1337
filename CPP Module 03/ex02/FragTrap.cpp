#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor has been called" << std::endl;
	this->Hit_point = 100;
	this->Energie_point = 100;
	this->attack_damage = 30;
	this->class_name = "FragTrap";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap name modifying constructor has been called" << std::endl;
	this->Hit_point = 100;
	this->Energie_point = 100;
	this->attack_damage = 30;
	this->class_name = "FragTrap";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor has been called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap request a positive high fives" << std::endl;
}
