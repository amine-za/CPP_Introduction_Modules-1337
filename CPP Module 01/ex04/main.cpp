/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:49:42 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/25 10:03:29 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string my_replace(std::string file_content, std::string s1, std::string s2)
{
	int	indc;
	while (1)
	{
		indc = file_content.find(s1);
		if (indc == std::string::npos)
			break;
		file_content.erase(indc, s1.length());
		file_content.insert(indc, s2);		
	}
	return (file_content);
}


int main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::string line;
	std::string filename;
	std::string	file_content;
	if (ac == 4)
	{
		filename = av[1];
		s1 = av[2];
		s2 = av[3];
		std::ifstream input(filename);
		std::ofstream output(filename + ".replace");
		if (!input.is_open() || !output.is_open() || s1.length() == 0 || s2.length() == 0)
		{
			std::cout << "It appearse that there is something wrong with the parameters that you entered" << std::endl;
			return (1);
		}
		while (1)
		{
			std::getline(input, line);
			file_content += line;
			if (!input.eof())
				file_content += '\n';
			else
				break;
		}
		input.close();
		file_content = my_replace(file_content, s1, s2);
		output << file_content;
		output.close();
	}
	else
	{
		std::cout << "You have to enter three arguments" << std::endl;
		return (1);
	}
	return (0);
}
