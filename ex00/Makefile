CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex00

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

Animal.o: Animal.cpp Animal.hpp
Cat.o: Cat.cpp Cat.hpp Animal.hpp
Dog.o: Dog.cpp Dog.hpp Animal.hpp
main.o: main.cpp Animal.hpp Dog.hpp Cat.hpp

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re