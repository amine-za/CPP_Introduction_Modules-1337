/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:17:47 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/07 14:57:54 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << first_name << " is destroyed" << std::endl;
}

void Zombie::setter(std::string name)
{
	first_name = name;
}

void	Zombie::announce(void)
{
	std::cout << first_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
