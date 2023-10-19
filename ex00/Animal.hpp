#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :
		std::string type;

	public :
		Animal();
		Animal(Animal &obj);
		virtual ~Animal();
		virtual  std::string	getType() const;
		virtual void	makeSound() const;

		Animal &operator=(Animal & obj);
};

#endif