NAME = serialize

INCLUDE = header.h

CC = clang++

CPPFLAGS = -Wall -Wextra -Werror

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME) -I $(INCLUDE)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

