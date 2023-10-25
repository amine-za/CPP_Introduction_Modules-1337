#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(WrongCat &obj);
		~WrongCat();
		std::string	getType() const;
		void makeSound() const;

		WrongCat &operator=(WrongCat &obj);
};

#endif