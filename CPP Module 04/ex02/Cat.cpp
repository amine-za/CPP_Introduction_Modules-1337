#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor has been called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat &obj) : Animal(obj)
{
	std::cout << "Cat copy constructor has been called" << std::endl;
	*this = obj;
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called" << std::endl;
	delete (brain);
}
 void	Cat::makeSound() const
{
	std::cout << "meows" << std::endl;
}

std::string	Cat::getType()
{
	return (type);
}

Cat &Cat::operator=(Cat &obj)
{
	this->brain = obj.brain;
	return *this;
}