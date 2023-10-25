/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:24:08 by azaghlou          #+#    #+#             */
/*   Updated: 2023/07/26 15:37:34 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <string>

class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_num;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
		int	isEmpty();
		std::string	set_and_get_f_n(std::string str, int flag);
		std::string	set_and_get_l_n(std::string str, int flag);
		std::string	set_and_get_n_n(std::string str, int flag);
		std::string	set_and_get_p_n(std::string str, int flag);
		std::string	set_and_get_d_s(std::string str, int flag);
};
