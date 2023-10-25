#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		Cat(Cat &obj);
		~Cat();
		std::string	getType() const;
		void makeSound() const;

		Cat &operator=(Cat &obj);
};

#endif