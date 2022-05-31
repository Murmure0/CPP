# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 13:23:46 by mberthet          #+#    #+#              #
#    Updated: 2022/05/31 14:37:58 by mberthet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

MAIN =	main.cpp \

SOURCES = $(MAIN)

OBJECTS = $(SOURCES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJECTS)
	@$(CC)  $(OBJECTS) -o $(NAME)
	@echo "[\033[32m$(NAME) compiled\033[0m]"


clean:
	$(RM) $(OBJECTS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: clean fclean re all