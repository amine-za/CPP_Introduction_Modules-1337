/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:52:10 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/08 19:17:45 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string wpn_type)
{
	weapon_type = wpn_type;
}

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

void Weapon::setType(std::string set_type)
{
	weapon_type = set_type;
}

std::string Weapon::getType()
{
	return (weapon_type);
}
