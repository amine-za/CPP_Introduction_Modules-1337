/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:26:10 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/10 20:16:02 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

int	Contact::isEmpty()
{
	if (first_name.empty())
		return (1);
	return (0);
}

std::string	Contact::set_and_get_f_n(std::string str, int flag)
{
	if (flag == 1)
		first_name = str;
	return (first_name);
}

std::string	Contact::set_and_get_l_n(std::string str, int flag)
{
	if (flag == 1)
		last_name = str;
	return (last_name);
}

std::string	Contact::set_and_get_n_n(std::string str, int flag)
{
	if (flag == 1)
		nickname = str;
	return (nickname);
}

std::string	Contact::set_and_get_p_n(std::string str, int flag)
{
	if (flag == 1)
		phone_num = str;
	return (phone_num);
}

std::string	Contact::set_and_get_d_s(std::string str, int flag)
{
	if (flag == 1)
		darkest_secret = str;
	return (darkest_secret);
}
