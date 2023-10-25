#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& weapon) : wpn(weapon), name(str) //initializer list
{
}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << wpn.getType() << std::endl;
}
