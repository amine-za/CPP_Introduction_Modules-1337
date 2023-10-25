Name = megaphone
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all	: $(Name)

$(Name) : $(OBJ)
	c++ -Wall -Wextra -Werror $(OBJ) -o $(Name)

clean : 
	rm -rf $(OBJ)

fclean:
	rm -rf $(Name) $(OBJ)

re : fclean all
