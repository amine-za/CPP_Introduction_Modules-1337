#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor has been called" << std::endl;
	type = "Cat";
	// test = "non default";
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called" << std::endl;
}
 void	Cat::makeSound()
{
	std::cout << "meows" << std::endl;
}

std::string	Cat::getType()
{
	return (type);
}

void	Cat::testing_getter()
{
	std::cout << test << std::endl;
}
