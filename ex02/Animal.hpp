#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :
		std::string type;

	public :
		Animal();
		virtual ~Animal();
		virtual std::string	getType() = 0;
		virtual void	makeSound() = 0;
};

#endif