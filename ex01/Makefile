NAME = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Contact.cpp PhoneBook.cpp utils.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
COMPILER = c++

%.o : %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) -f $(NAME)

fclean: clean
	$(RM) -f $(OBJ)

re: fclean $(NAME)

.PHONY: clean fclean re
