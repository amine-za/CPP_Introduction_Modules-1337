Name = animals
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp \
	WrongAnimal.cpp WrongCat.cpp WrongDog.cpp

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

all     : $(Name)

$(Name) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(Name)

clean : 
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(Name)

re : fclean all

my : re
	rm -rf $(OBJ)
	clear
