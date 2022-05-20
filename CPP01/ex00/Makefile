NAME = BraiiiiiiinnnzzzZ

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

MAIN =	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \

SOURCES = $(MAIN)

OBJECTS = $(SOURCES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "[\033[32m$(NAME) compiled\033[0m]"


clean:
	$(RM) $(OBJECTS) && make clean
	
fclean: clean
	$(RM) $(NAME) && make fclean
	
re: fclean all

.PHONY: clean fclean re all