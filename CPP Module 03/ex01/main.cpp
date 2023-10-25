/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:38:40 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/24 19:35:44 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	// ScavTrap Vermouth;
	ScavTrap Vermouth("Vermouth");

	// std::cout << "\nEnergie point before attacking : " << Vermouth.values_getter(2) << std::endl; //testing before
	Vermouth.attack("jodie");
	// std::cout << "Energie point after attacking : " << Vermouth.values_getter(2) << std::endl; //testing after


	// std::cout << "\nHit point before taking damage : " << Vermouth.values_getter(1) << std::endl; //testing before
	Vermouth.takeDamage(9);
	// std::cout << "Hit point after taking damage : " << Vermouth.values_getter(1) << std::endl; //testing after


	// std::cout << "\nEnergie point before repairing : " << Vermouth.values_getter(2) //testing before
	// << "    |    Hit point before : " << Vermouth.values_getter(1) << std::endl;
	Vermouth.beRepaired(14);
	// std::cout << "Energie point after repairing  : " << Vermouth.values_getter(2)
	// << "    |    Hit point after : " << Vermouth.values_getter(1) << "\n" << std::endl; //testing after
}