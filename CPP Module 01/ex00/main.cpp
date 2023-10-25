/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:07:03 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/10 12:10:27 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*       It creates a zombie, print that it has been created,
   name it, and return it so you can use it outside of the function scope */
Zombie* newZombie(std::string name)
{
	Zombie	*zombie;

	std::cout << "zombie " << name << " has been created" << std::endl;
	zombie = new Zombie;
	zombie->setter(name);
	return (zombie);
}

// It creates a zombie, print that it has been created, name it, and the zombie announces itself.
void randomChump(std::string name)
{
	Zombie zombie;

	std::cout << "zombie " << name << " has been created" << std::endl;
	zombie.setter(name);
	zombie.announce();
}

int main()
{
	Zombie *zombie;
	
	zombie = newZombie("Grimm");
	randomChump("Mortis");
	zombie->announce();
	delete zombie;
}
