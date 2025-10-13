# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/13 18:43:55 by shaun             #+#    #+#              #
#    Updated: 2025/08/22 14:55:29 by shaun             ###   ########kl        #
#                                                                              #
# **************************************************************************** #

# Important terms/concepts: Targets, prerequisites, variables & commands.

# Variables below:

FLAGS = -Wall -Werror -Wextra 

LIB = libft/libft.a 

NAME = push_swap

INC = push_swap.h

SRC = string_checker.c add_to_stack.c operations.c push_swap_utils.c\
	push_swap.c decibase.c normalizer.c

OBJ = string_checker.o add_to_stack.o operations.o push_swap_utils.o\
	push_swap.o decibase.o normalizer.o

# Targets & dependencies below:

all: $(NAME)

$(LIB):
	make -C libft

$(OBJ):
	cc -c $(SRC)

$(NAME): $(OBJ) $(LIB)
	cc $(FLAGS) -I $(INC) $(OBJ) $(LIB) -o $(NAME)

clean:
	rm -rf $(OBJ)
	make clean -C libft

fclean: clean
	rm -rf $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: clean fclean re all