#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public :
		WrongDog();
		WrongDog(WrongDog & obj);
		~WrongDog();
		std::string	getType() const;
		void	makeSound() const;

		WrongDog &operator=(WrongDog & obj);
};

#endif