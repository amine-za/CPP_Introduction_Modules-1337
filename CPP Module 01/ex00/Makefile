Name = ex00
SRC = main.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all	: $(Name)

$(Name) : $(OBJ)
	c++ -Wall -Wextra -Werror $(OBJ) -o $(Name)

clean : 
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(Name)

re : fclean all

my : re
	rm -rf $(OBJ)
	clear