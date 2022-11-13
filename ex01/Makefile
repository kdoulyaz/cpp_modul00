# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 15:48:13 by kdoulyaz          #+#    #+#              #
#    Updated: 2022/11/13 16:05:44 by kdoulyaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------------Makefile-----------------#

NAME := PhoneBook

SRC := main.cpp\

CPP := c++ -Werror -Wextra -Wall -g -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		@$(CPP) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all