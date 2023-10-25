#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor has been called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &obj)
{
	std::cout << "WrongCat copy constructor has been called" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor has been called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "meows" << std::endl;
}

 std::string	WrongCat::getType() const
{
	return (type);
}

WrongCat &WrongCat::operator=(WrongCat &obj)
{
	(void)obj;
	return *this;
}