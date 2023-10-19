#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "animal default constructor has been called" << std::endl;
	type = "default type";
}

Animal::Animal(Animal &obj)
{
	std::cout << "animal copy constructor has been called" << std::endl;
	*this = obj;
}

Animal::~Animal()
{
	std::cout << "animal destructor has been called" << std::endl;
}

 std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "default sound" << std::endl;
}

Animal &Animal::operator=(Animal & obj)
{
	this->type = obj.type;
	return *this;
}
