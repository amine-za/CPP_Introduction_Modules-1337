#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :
		std::string test;
		std::string type;
	public :
		Animal();
		~Animal();
		virtual std::string	getType();
		virtual void	makeSound();
};

#endif