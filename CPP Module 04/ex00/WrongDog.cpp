#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	std::cout << "WrongDog default constructor has been called" << std::endl;
	type = "WrongDog";
}

WrongDog::WrongDog(WrongDog & obj)
{
	std::cout << "WrongDog copy constructor has been called" << std::endl;
	*this = obj;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor has been called" << std::endl;
}

void	WrongDog::makeSound() const
{
	std::cout << "barks" << std::endl;
}
 std::string	WrongDog::getType() const
{
	return (type);
}

WrongDog &WrongDog::operator=(WrongDog & obj)
{
	(void) obj;
	return *this;
}