#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor has been called" << std::endl;
}

Brain::Brain(Brain &obj)
{
	std::cout << "Brain copy constructor has been called" << std::endl;
	*this = obj;
}

Brain::~Brain()
{
	std::cout << "Brain destructor has been called" << std::endl;
}

Brain &Brain::operator=(Brain &obj)
{
	(void)obj;
	return *this;
}
