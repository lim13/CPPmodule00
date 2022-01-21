NAME = account

SRC = tests.cpp Account.cpp
OBJ = $(patsubst %.cpp, %.o, $(SRC))
HEADER = Account.hpp
CC = clang++
RM = rm -rf
FLAGS = -std=c++98

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