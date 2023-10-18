#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor has been called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called" << std::endl;
	delete (brain);
}
 void	Cat::makeSound()
{
	std::cout << "meows" << std::endl;
}

std::string	Cat::getType()
{
	return (type);
}
