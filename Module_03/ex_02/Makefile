# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 22:33:43 by yer-retb          #+#    #+#              #
#    Updated: 2023/02/17 22:31:55 by yer-retb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

SRC = main.cpp FragTrap.cpp ClapTrap.cpp

CC = c++

RM = rm -rf

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBG = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBG)
	$(CC) $(CPPFLAGS) $(OBG) -o $(NAME)

clean :
		$(RM) $(OBG)

fclean : clean
		$(RM) $(NAME)

re : fclean all
