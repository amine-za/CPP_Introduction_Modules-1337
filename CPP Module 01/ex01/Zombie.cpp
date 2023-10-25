/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:17:47 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/10 12:13:17 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{}

void Zombie::setter(std::string name)
{
	first_name = name;
}

std::string Zombie::getter()
{
	return (first_name);
}

void	Zombie::announce(void)
{
	std::cout << getter() << std::endl;
	std::cout << getter() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
