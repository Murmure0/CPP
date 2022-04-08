# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 17:17:42 by mberthet          #+#    #+#              #
#    Updated: 2022/04/08 17:21:26 by mberthet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SOURCES = tests.cpp \
		Account.cpp

OBJECTS = $(SOURCES:%.cpp=%.o)

all :		$(NAME)

$(NAME):	$(OBJECTS)
		@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) && make clean
		@echo "[\033[32m$(NAME) ready to use\033[0m]"


clean:
		@$(RM) $(OBJECTS)
	
fclean: clean
		@$(RM) $(NAME)
	
re: fclean all

.PHONY: clean fclean re all