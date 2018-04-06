EXEC = replacer
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC_FILES = main.cpp Replacer.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $(EXEC)

$(OBJ_FILES):
	$(CC) $(FLAGS) -c $(SRC_FILES)

clean:
	rm $(OBJ_FILES)

fclean: clean
	rm $(EXEC)

re: fclean all