#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public :
		Brain();
		Brain(Brain &obj);
		~Brain();
		std::string ideas[100];

		Brain &operator=(Brain &obj);
};

#endif