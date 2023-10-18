#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :
		std::string type;
	public :
		// virtual void pure_virtual() = 0;
		Animal();
		virtual ~Animal();
		virtual std::string	getType() = 0;
		virtual void	makeSound() = 0;
};

#endif