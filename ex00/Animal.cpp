#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "animal default constructor has been called" << std::endl;
	type = "default type";
	// test = "default";
}

Animal::~Animal()
{
	std::cout << "animal destructor has been called" << std::endl;
}

std::string	Animal::getType()
{
	return (type);
}

void Animal::makeSound()
{
	std::cout << "default sound" << std::endl;
}
