#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog(Dog & obj);
		~Dog();
		std::string	getType() const;
		void	makeSound() const;

		Dog &operator=(Dog & obj);
};

#endif