# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maelle <maelle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 16:08:29 by mberthet          #+#    #+#              #
#    Updated: 2022/06/07 16:20:06 by maelle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SOURCES = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

OBJECTS = $(SOURCES:%.cpp=%.o)

all :		$(NAME)

$(NAME):	$(OBJECTS)
		@$(CC)  $(OBJECTS) -o $(NAME)
		@echo "[\033[32m$(NAME) ready to use\033[0m]"


clean:
		@$(RM) $(OBJECTS)
		@echo "[\033[32m$(NAME) files cleaned !\033[0m]"
	
fclean: clean
		@$(RM) $(NAME)
	
re: fclean all

.PHONY: clean fclean re all