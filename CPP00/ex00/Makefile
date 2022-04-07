# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maelle <maelle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 15:20:22 by maelle            #+#    #+#              #
#    Updated: 2022/04/05 15:22:38 by maelle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

MAIN = megaphone.cpp 

SOURCES = $(MAIN)

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "[\033[32m$(NAME) compiled\033[0m]"


clean:
	/bin/rm -f $(OBJECTS) && make clean
	
fclean: clean
	/bin/rm -f $(NAME) && make fclean
	
re: fclean all

.PHONY: clean fclean re all