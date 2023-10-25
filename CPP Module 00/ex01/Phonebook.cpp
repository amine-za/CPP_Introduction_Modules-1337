/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 22:15:15 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/10 20:27:34 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{}

Phonebook::~Phonebook()
{}

std::string Phonebook::fix_str_length(int index, int flag)
{
	int i = 9;
	std::string str;
	if (flag == 1)
	{
		str = cntct[index].set_and_get_f_n("", 0);
		if (cntct[index].set_and_get_f_n("", 0).length() >= 11)
		{
			str[i++] = '.';
			while (str[i])
				str[i++] = '\0';
		}
		return (str);
	}
	if (flag == 2)
	{
		str = cntct[index].set_and_get_l_n("", 0);
		if (cntct[index].set_and_get_l_n("", 0).length() >= 11)
		{
			str[i++] = '.';
			while (str[i])
				str[i++] = '\0';
		}
		return (str);
	}
	if (flag == 3)
	{
		str = cntct[index].set_and_get_n_n("", 0);
		if (cntct[index].set_and_get_n_n("", 0).length() >= 11)
		{
			str[i++] = '.';
			while (str[i])
				str[i++] = '\0';
		}
		return (str);
	}
	return ("");
}

Contact	*Phonebook::rtrn_cntct()
{
	return (cntct);
}

void    Phonebook::write_contacts()
{
    int i = 0;
	std::cout << " ------------------------------------------- " << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
    while (!cntct[i].isEmpty())
    {
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << fix_str_length(i, 1);
		std::cout << "|" << std::setw(10) << fix_str_length(i, 2);
		std::cout << "|" << std::setw(10) << fix_str_length(i, 3) <<  "|\n";
        i++;
    }
	std::cout << " ------------------------------------------- " << std::endl;
}

void    Phonebook::fill_one_cntct_arg(int index, std::string str, int flag)
{
    std::string input;

    while (1)
    {
        std::cout << str;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
        if (input[0])
        {
			if (flag == 1)
				cntct[index].set_and_get_f_n(input, 1);
			else if (flag == 2)
            	cntct[index].set_and_get_l_n(input, 1);
			else if (flag == 3)
            	cntct[index].set_and_get_n_n(input, 1);
			else if (flag == 4)
            	cntct[index].set_and_get_p_n(input, 1);
			else if (flag == 5)
            	cntct[index].set_and_get_d_s(input, 1);
			break;
        }
        std::cout << "It appeares that you entered an empty field\n";
    }
}

void    Phonebook::add_cmd()
{
    static int sttc;

	fill_one_cntct_arg(sttc, "Enter the first name : ", 1);
	fill_one_cntct_arg(sttc, "Enter the last name : ", 2);
	fill_one_cntct_arg(sttc, "Enter the nick name : ", 3);
	fill_one_cntct_arg(sttc, "Enter the phone number : ", 4);
	fill_one_cntct_arg(sttc, "Enter the darkest secret : ", 5);
	sttc++;
	if (sttc == 8)
		sttc = 0;
}
