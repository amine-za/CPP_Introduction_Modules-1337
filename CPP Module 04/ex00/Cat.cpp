#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor has been called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat &obj)
{
	std::cout << "Cat copy constructor has been called" << std::endl;
	*this = obj;
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "meows" << std::endl;
}

 std::string	Cat::getType() const
{
	return (type);
}

Cat &Cat::operator=(Cat &obj)
{
	(void)obj;
	return *this;
}