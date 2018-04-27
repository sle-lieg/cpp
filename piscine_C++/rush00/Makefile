NAME= ft_retro
CC= clang++
FLAGS= -Wall -Wextra -Werror
SRC_PATH= src/
OBJ_PATH= obj/
HEADERS= -I headers/
SRC_F= main.cpp Map.cpp
OBJ_F= $(addprefix $(OBJ_PATH), $(SRC_F:.cpp=.o))
LCURSES= -lncurses

all: $(NAME)

$(NAME): $(OBJ_F)
	@$(CC) -o $@ $^ $(LCURSES)
	@echo generate exec '$@' from '$^'

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	@echo generatating '$@'
	@$(CC) $(FLAGS) -o $@ $(HEADERS) -c $^

clean:
	rm -rf $(OBJ_F)

fclean: clean
	rm -rf $(NAME)

re: fclean all