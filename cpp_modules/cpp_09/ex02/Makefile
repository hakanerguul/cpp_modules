NAME		:=	PmergeMe
SRCS		:=	main.cpp PmergeMe.cpp
OBJS		:=	$(SRCS:cpp=o)
CPP			:=	c++
CPPFLAGS	:=	-Wall -Wextra -Werror -g3 -std=c++98
RM			:=	rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all