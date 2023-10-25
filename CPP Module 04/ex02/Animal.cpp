#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "animal default constructor has been called" << std::endl;
	type = "default type";
}

Animal::~Animal()
{
	std::cout << "animal destructor has been called" << std::endl;
}
