/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:44:57 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/19 17:42:00 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	std::string str;
    int i = 1;
    int j = 0;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(int a = 1; a < ac; a++)
	{
		str = av[a];
		for(int b = 0; str[b]; b++)
			std::cout << (char)std::toupper(str[b]);
	}
	std::cout << std::endl;
	return 0;
}
