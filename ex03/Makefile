Name = materia

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -fsanitize=address -g

SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp \
		Character.cpp MateriaSource.cpp

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
