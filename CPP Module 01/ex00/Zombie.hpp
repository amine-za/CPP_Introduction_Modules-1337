/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:42:51 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/07 15:06:20 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
	private : 
		std::string first_name;
	public :
		Zombie();
		~Zombie();
		void setter(std::string name);
		void announce(void);
};
