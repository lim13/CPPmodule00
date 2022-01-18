NAME = phonebook

SRC = phonebook.cpp main.cpp contacts.cpp
OBJ = $(patsubst %.cpp, %.o, $(SRC))
HEADER = phonebook.hpp
CC = clang++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER) Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re