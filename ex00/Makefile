NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
COMPILER = c++

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

%o : %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	$(RM) -f $(NAME)

fclean: clean
	$(RM) -f $(OBJ)

re: fclean $(NAME)

.PHONY: clean fclean re
