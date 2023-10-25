/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:07:03 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/10 12:14:11 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombie;
	Zombie *head;

	head = zombie;
	zombie = new Zombie[N];
	for(int x = 0; x < N; x++)
		zombie[x].setter(name);
	return (zombie);
}

int main()
{
	Zombie *zombie;
	
	zombie = zombieHorde(12, "Ravenshadow");
	
	//test
	for  (int x = 0; x < 12; x++)
	{
		std::cout << "x = " << x << " : ";
		zombie[x].announce();
	}

	delete[] zombie;
}
