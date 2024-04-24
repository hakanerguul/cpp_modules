NAME = Harl

CXXFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:%.cpp=%.o)

SRC = Harl.cpp main.cpp


all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CXXFLAGS) $(SRC) -o $(NAME) -std=c++98

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
