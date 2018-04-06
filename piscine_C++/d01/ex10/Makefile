EXEC = cato9tails
CC = clang++
FLAGS = -Wall -Wextra -Werror

SRC_F = main.cpp Kat.cpp
OBJ_F = $(SRC_F:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ_F)
	$(CC) $^ -o $(EXEC)

$(OBJ_F): $(SRC_F)
	$(CC) -c $(FLAGS) $^

clean:
	rm $(OBJ_F)

fclean: clean
	rm $(EXEC)

re: fclean all