#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor has been called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called" << std::endl;
	delete (brain);
}

void	Dog::makeSound()
{
	std::cout << "barks" << std::endl;
}

std::string	Dog::getType()
{
	return (type);
}
