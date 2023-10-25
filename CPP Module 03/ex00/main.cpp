/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:38:40 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/22 18:35:50 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Akai("Akai");

	// std::cout << "\nEnergie point of Akai before attacking : " << Akai.values_getter(2) << std::endl; //testing before
	Akai.attack("Jin");
	// std::cout << "Energie point of Akai after attacking : " << Akai.values_getter(2) << std::endl; //testing after


	// std::cout << "\nHit point before taking damage : " << Akai.values_getter(1) << std::endl; //testing before
	Akai.takeDamage(4);
	// std::cout << "Hit point after taking damage : " << Akai.values_getter(1) << std::endl; //testing after


	// std::cout << "\nEnergie point before repairing : " << Akai.values_getter(2) //testing before
	// << "    |    Hit point before repairing : " << Akai.values_getter(1) << std::endl;
	Akai.beRepaired(14);
	// std::cout << "Energie point after repairing  : " << Akai.values_getter(2)
	// << "    |    Hit point after repairing : " << Akai.values_getter(1) << "\n" << std::endl; //testing after
}