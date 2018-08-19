NAME = fr4g-tp

SRCS = main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp
HDRS = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp NinjaTrap.hpp

OBJECTS = $(SRCS:.cpp=.o)

FLAGS = -std=c++98 -Wall -Werror -Wextra

CC = clang++

all: $(NAME)

$(NAME): $(OBJECTS) $(HDRS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)
%.o: %.cpp
	@$(CC) $(FLAGS) -c $<
clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)	

re: fclean all

.PHONY: re all clean fclean
