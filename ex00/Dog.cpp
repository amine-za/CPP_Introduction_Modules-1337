#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor has been called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called" << std::endl;
}

 void	Dog::makeSound()
{
	std::cout << "barks" << std::endl;
}
std::string	Dog::getType()
{
	return (type);
}
