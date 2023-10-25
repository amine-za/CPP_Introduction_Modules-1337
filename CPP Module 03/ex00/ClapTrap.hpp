#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#define BLUE_TEXT "\033[34m"
#define RESET_TEXT "\033[0m"

class ClapTrap
{
	private:
		std::string Name;
		int			Hit_point;
		int			Energie_point;
		int			attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string	name_getter();
		int	values_getter(int flag);
};

#endif