# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 21:06:33 by yer-retb          #+#    #+#              #
#    Updated: 2023/03/06 19:09:52 by yer-retb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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
