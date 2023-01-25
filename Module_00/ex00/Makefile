# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 03:42:02 by yer-retb          #+#    #+#              #
#    Updated: 2023/01/25 20:38:41 by yer-retb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

SRC = megaphone.cpp

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
