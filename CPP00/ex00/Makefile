# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 15:20:22 by maelle            #+#    #+#              #
#    Updated: 2022/05/19 15:00:49 by mberthet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SOURCES = megaphone.cpp \

OBJECTS = $(SOURCES:.c=.o)

all :		$(NAME)

$(NAME):	$(OBJECTS)
		@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
		@echo "[\033[32m$(NAME) compiled\033[0m]"

clean:
	@$(RM) $(OBJECTS)
	
fclean: clean
	@$(RM) $(NAME)
	
re: fclean all

.PHONY: clean fclean re all