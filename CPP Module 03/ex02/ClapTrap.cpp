/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:43:58 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/24 19:11:44 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor has been called" << std::endl;
	this->Name = "default";
	this->Hit_point = 10;
	this->Energie_point = 10;
	this->attack_damage = 0;
	this->class_name = "ClapTrap ";
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap name modifying constructor has been called" << std::endl;
	this->Hit_point = 10;
	this->Energie_point = 10;
	this->attack_damage = 0;
	this->Name = name;
	this->class_name = "ClapTrap ";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor has been called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Energie_point > 0 && this->Hit_point > 0)
	{ 
		this->Energie_point--;
		std::cout << class_name << Name << BLUE_TEXT << " attacks " << RESET_TEXT
		<< target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->Hit_point -= amount;
	std::cout << class_name << Name << BLUE_TEXT << " takes damage " << RESET_TEXT
	 << "of " << amount << " points damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energie_point > 0 && this->Hit_point > 0)
	{
		this->Hit_point += amount;
		this->Energie_point--;
		std::cout << class_name << Name <<  BLUE_TEXT << " is being repaired " << RESET_TEXT
		<< "causing an improve of " << amount << " energy points!" << std::endl;
	}
}

std::string	ClapTrap::name_getter()
{
	return (this->Name);
}

int	ClapTrap::values_getter(int flag)
{
	if (flag == 1)
		return (this->Hit_point);
	if (flag == 2)
		return (this->Energie_point);
	if (flag == 3)
		return (this->attack_damage);
	return (-1);
}
