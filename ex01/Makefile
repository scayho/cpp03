# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 11:06:11 by abelahce          #+#    #+#              #
#    Updated: 2023/02/06 14:06:31 by abelahce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

NAME=ClapTrap
HDR=ClapTrap.hpp

SRC := ClapTrap.cpp main.cpp

OBJ := $(SRC:.cpp=.o)

%.o : %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@ 

all: $(NAME)


$(NAME):$(OBJ)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME) 

clean :
	rm -rf  $(OBJ)

fclean: clean
	rm -rf ClapTrap

re: fclean all

