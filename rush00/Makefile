# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/20 10:18:24 by iosypenk          #+#    #+#              #
#    Updated: 2018/06/20 10:18:31 by iosypenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

CC = clang++

CFLAGS = -Wall -Wextra -Werror

OBJ :=	$(patsubst %.cpp,%.o,$(wildcard ./*.cpp))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
