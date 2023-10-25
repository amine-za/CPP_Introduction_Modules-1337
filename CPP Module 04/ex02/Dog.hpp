#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;

	public :
		Dog();
		Dog(Dog &obj);
		~Dog();
		std::string	getType();
		void	makeSound() const;

		Dog &operator=(Dog &obj);
};

#endif