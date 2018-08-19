NAME = exception

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
HDRS = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

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
