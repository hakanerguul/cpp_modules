NAME	=	GlobalBank
RM		=	rm -f
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@echo "\n\033[0;36m   | Compiling...\033[0m"
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "\033[1;32m   | GlobalBank has been compiled!\033[0m\n"

clean:
	@$(RM) $(NAME)
	@echo "\n\033[0;31m</ EVERYTHING HAS BEEN DELETED! >\033[0m\n"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
