#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private :
		Weapon *wpn;
		std::string name;
	public :
		HumanB(std::string str);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &set_type);
};

#endif