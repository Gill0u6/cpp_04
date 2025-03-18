CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = InterfaceRecap
SRC =	main.cpp\
		src/AMateria.cpp\
		src/Character.cpp\
		src/Cure.cpp\
		src/Ice.cpp\
		src/ICharacter.cpp\
		src/IMateriaSource.cpp\
		src/MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all : $(NAME)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all
