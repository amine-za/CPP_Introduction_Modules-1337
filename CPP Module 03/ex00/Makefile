Name = ClapTrap
SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all     : $(Name)

$(Name) : $(OBJ)
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(Name)

clean : 
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(Name)

re : fclean all

my : re
	rm -rf $(OBJ)
	clear