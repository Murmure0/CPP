# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 14:54:31 by maelle            #+#    #+#              #
#    Updated: 2022/05/19 15:26:33 by mberthet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SOURCES = main.cpp \
		ClassContact.cpp \
		ClassPhonebook.cpp \

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