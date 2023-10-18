Name = ex01
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
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
