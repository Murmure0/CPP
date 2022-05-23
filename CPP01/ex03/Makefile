NAME = ex03

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

MAIN =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \

SOURCES = $(MAIN)

OBJECTS = $(SOURCES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "[\033[32m$(NAME) compiled\033[0m]"


clean:
	$(RM) $(OBJECTS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: clean fclean re all