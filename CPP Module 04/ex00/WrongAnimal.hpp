#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected :
		std::string type;

	public :
		WrongAnimal();
		WrongAnimal(WrongAnimal &obj);
		virtual ~WrongAnimal();
		virtual  std::string	getType() const;
		void	makeSound() const;

		WrongAnimal &operator=(WrongAnimal & obj);
};

#endif