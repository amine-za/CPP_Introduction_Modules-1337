# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 16:47:32 by azaghlou          #+#    #+#              #
#    Updated: 2023/09/11 10:49:30 by azaghlou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = ex01
SRC = main.cpp Contact.cpp Phonebook.cpp
OBJ = $(SRC:.cpp=.o)

all	: $(Name)

$(Name) : $(OBJ)
	c++ -Wall -Wextra -Werror $(OBJ) -o $(Name)

clean : 
	rm -rf $(OBJ)

fclean:
	rm -rf $(Name) $(OBJ)

re : fclean all

my : re clean
	clear