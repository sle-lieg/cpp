EXEC = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRC_FILES = phonebook.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(EXEC)

$(OBJ_FILES): $(SRC_FILES)
	$(CC) $(CFLAGS) -c $^

clean:
	rm $(OBJ_FILES)

fclean: clean
	rm $(EXEC)

re: fclean all