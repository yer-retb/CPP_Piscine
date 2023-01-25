# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 00:48:50 by yer-retb          #+#    #+#              #
#    Updated: 2023/01/24 23:01:53 by yer-retb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = PhoneBook.cpp Contact.cpp main.cpp

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
