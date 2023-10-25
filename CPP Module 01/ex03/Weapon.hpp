#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private :
		std::string	weapon_type;
	public :
		Weapon();
		Weapon(std::string wpn_type);
		~Weapon();
		std::string getType();
		void setType(std::string set_type);
};

#endif