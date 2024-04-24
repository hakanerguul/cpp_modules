NAME = brain

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CXXFLAGS) $(SRCS) -o $(NAME) -std=c++98

re : fclean all

fclean :
	rm -rf $(OBJS) $(NAME)

clean :
	rm -rf $(OBJS)

.PHONY : all re fclean clean
