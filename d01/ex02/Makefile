NAME = zombie

SRCS = main.cpp Zombie.cpp ZombieEvent.cpp
HDRS = Zombie.hpp ZombieEvent.hpp

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
