# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maelle <maelle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 14:39:27 by mberthet          #+#    #+#              #
#    Updated: 2022/05/30 10:33:23 by maelle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SOURCES = main.cpp \
		Harl.cpp \


OBJECTS = $(SOURCES:%.cpp=%.o)

all :		$(NAME)

$(NAME):	$(OBJECTS)
		@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
		@echo "[\033[32m$(NAME) ready to use\033[0m]"


clean:
		@$(RM) $(OBJECTS)
		@echo "[\033[32m$(NAME) files cleaned !\033[0m]"
	
fclean: clean
		@$(RM) $(NAME)
	
re: fclean all

.PHONY: clean fclean re all