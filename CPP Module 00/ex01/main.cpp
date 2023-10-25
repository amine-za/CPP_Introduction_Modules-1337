/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:39:55 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/19 20:10:09 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	str_is_num(std::string input)
{
	int i = 0;
	
	while (input[i] == ' ')
		i++;
	if (input.length() - i > 1)
		return(0);
	if (!std::isdigit(input[i]) && input[i] != '+' && input[i] != '-')
		return (0);
	for(int x = 0; input[x]; x++)
	{
		if (!std::isdigit(input[x]))
			return (0);
	}
	return (1);
}

void    search_cmd(Phonebook *pb)
{
    //pb stands for phone book
    int index = -1;
    std::string input;

    pb->write_contacts();
    if (!pb->rtrn_cntct()[0].isEmpty())
	{
		while (1)
		{
			std::cout << "Enter the index of the contact desired > ";
			while (1)
			{
				std::getline(std::cin, input);
				if (std::cin.eof())
					exit(0);
				if (input[0] && str_is_num(input))
					index = std::atoi(&input[0]);			
				if (index < 0 || index > 7 || pb->rtrn_cntct()[index].isEmpty())
					std::cout << "That is not a valid index\nEnter a valid index of the contact desired > "; 
				else
					break;
			}
			if (index >= 0 && index <= 7 && !pb->rtrn_cntct()[index].isEmpty())
			{
				std::cout << "first name : " << pb->rtrn_cntct()[index].set_and_get_f_n("", 0) << std::endl;
				std::cout << "last name : " << pb->rtrn_cntct()[index].set_and_get_l_n("", 0) << std::endl;
				std::cout << "nickname : " << pb->rtrn_cntct()[index].set_and_get_n_n("", 0) << std::endl;
				std::cout << "phone number : " << pb->rtrn_cntct()[index].set_and_get_p_n("", 0) << std::endl;
				std::cout << "darkest secret : " << pb->rtrn_cntct()[index].set_and_get_d_s("", 0) << std::endl;
				break;
			}
		}
	}
	else
		std::cout << "It appears that you have no contacts to search" << std::endl;
}

void    fill_one_cntct_arg(std::string arg, std::string str)
{
    std::string input;

    while (1)
    {
        std::cout << str;
        std::cin >> input;
		if (std::cin.eof())
			exit(0);
        if (input[0])
        {
            arg = input;
            break;
        }
        std::cout << "It appeares that you entered an empty field\n";
    }
}

int main()
{
    std::string     input = "";
    Phonebook       phone_book;

    while (1)
    {
        std::cout << "Enter a command > ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
        if (input == "ADD")
			phone_book.add_cmd();
        else if (input == "SEARCH")
            search_cmd(&phone_book);
        else if (input == "EXIT" || std::cin.eof())
            break;
    }
    return 0;
}
