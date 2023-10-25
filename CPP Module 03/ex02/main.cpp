/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:38:40 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/25 12:46:55 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap amuro;
	// FragTrap *pp = new ClapTrap;
	// FragTrap amuro("amuro");

	std::cout << "\nEnergie point before attacking : " << amuro.values_getter(2) << std::endl; //testing before
	amuro.attack("kaito");
	std::cout << "Energie point after attacking : " << amuro.values_getter(2) << std::endl; //testing after


	std::cout << "\nHit point before taking damage : " << amuro.values_getter(1) << std::endl; //testing before
	amuro.takeDamage(9);
	std::cout << "Hit point after taking damage : " << amuro.values_getter(1) << std::endl; //testing after


	std::cout << "\nEnergie point before repairing : " << amuro.values_getter(2) //testing before
	<< "    |    Hit point before : " << amuro.values_getter(1) << std::endl;
	amuro.beRepaired(14);
	std::cout << "Energie point after repairing  : " << amuro.values_getter(2)
	<< "    |    Hit point after : " << amuro.values_getter(1) << "\n" << std::endl; //testing after
}