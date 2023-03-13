# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 02:29:44 by yer-retb          #+#    #+#              #
#    Updated: 2023/03/13 10:24:34 by yer-retb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

SRC = main.cpp

CC = c++

RM = rm -rf

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

OBG = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBG)
	$(CC) $(CPPFLAGS) $(OBG) -o $(NAME)

clean :
		$(RM) $(OBG)

fclean : clean
		$(RM) $(NAME)

re : fclean all
