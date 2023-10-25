/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:07:46 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/09 22:52:57 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << " I love having extra bacon for my 7XL-double-cheese"
	"-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << "Harl makes debug comment level" << std::endl;
}
void	Harl::info(void)
{
	std::cout << " I cannot believe adding extra bacon costs more money. You didn't put"
	"enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << "Harl makes info comment level" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"
	"years whereas you started working here since last month." << std::endl;
	std::cout << "Harl makes warning comment level" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << "Harl makes error comment level" << std::endl;
}
	
void	Harl::complain(std::string level)
{
	std::string str_arr[] = {"debug", "info", "warning", "error"};
	ptrFunction fct_pntr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(int x = 0; x < 4; x++)
	{
		if (level == str_arr[x])
			(this->*fct_pntr[x])();
	}
}
