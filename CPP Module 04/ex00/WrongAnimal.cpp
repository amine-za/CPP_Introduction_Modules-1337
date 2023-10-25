#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wronganimal default constructor has been called" << std::endl;
	type = "default type";
}

WrongAnimal::WrongAnimal(WrongAnimal &obj)
{
	std::cout << "Wronganimal copy constructor has been called" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wronganimal destructor has been called" << std::endl;
}

 std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "default sound" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal & obj)
{
	this->type = obj.type;
	return *this;
}
