#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	name = str;
}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon &set_type)
{
	wpn = &set_type;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << wpn->getType() << std::endl;
}
