/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:24:58 by azaghlou          #+#    #+#             */
/*   Updated: 2023/09/10 20:18:59 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

class Phonebook
{
	private:
        Contact cntct[9];
    public:
		Phonebook();
		~Phonebook();
		Contact	*rtrn_cntct();
		void    add_cmd();
		void    write_contacts();
		std::string fix_str_length(int index, int flag);
		void    fill_one_cntct_arg(int index, std::string str, int flag);
};
