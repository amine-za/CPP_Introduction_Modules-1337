Name = ex01
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

all     : $(Name)

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
