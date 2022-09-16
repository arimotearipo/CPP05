MAIN = main.cpp

SRCS = 	Bureaucrat.cpp \
		Form.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp \

OBJS = $(SRCS:.cpp=.o) main.o

HEADERS = $(SRCS:.cpp=.hpp)

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

NAME = bureaucrat

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS):	$(MAIN) $(SRCS)
			$(CC) $(FLAGS) $(MAIN) $(SRCS) -c

clean:		
			rm -rf $(OBJS)
			rm -rf *.shrub

fclean:		clean
			rm -rf $(NAME)

re:			fclean	all