/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:03:40 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/10 20:52:38 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//reference

int main()
{ 
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "Memory addresses : "<< std::endl;
	std::cout << "	The string           : " << &str << std::endl;
	std::cout << "	The string pointer   : " << stringPTR << std::endl;
	std::cout << "	The string reference : " << &stringREF << std::endl;

	std::cout << "\nThe values :" << std::endl;
	std::cout << "	The string           : " << str << std::endl;
	std::cout << "	The string pointer   : " << *stringPTR << std::endl;
	std::cout << "	The string reference : " << stringREF << std::endl;
}