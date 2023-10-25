#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor has been called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog & obj)
{
	std::cout << "Dog copy constructor has been called" << std::endl;
	*this = obj;
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "barks" << std::endl;
}
 std::string	Dog::getType() const
{
	return (type);
}

Dog &Dog::operator=(Dog & obj)
{
	(void) obj;
	return *this;
}