Name = ex03
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)

all	: $(Name)

$(Name) : $(OBJ)
	c++ -Wall -Wextra -Werror $(OBJ) -o $(Name)

clean : 
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(Name)

re : fclean all