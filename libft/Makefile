# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 16:01:44 by shaun             #+#    #+#              #
#    Updated: 2024/11/06 17:09:16 by shaun             ###   ########kl        #
#                                                                              #
# **************************************************************************** #

# Let me explain the difference between these Makefile rules:

# `fclean` (full clean):
# - Depends on the `clean` rule (will execute `clean` first)
# - Then removes the final program/library file ($(NAME))
# - Used when you want to remove all generated files, including the final executable

# `re` (rebuild):
# - Depends on `fclean` and `all` in that order
# - First does a full clean by running `fclean`
# - Then rebuilds everything from scratch by running `all`
# - Useful when you want to ensure a completely fresh build

# Example workflow:
# ```bash
# make clean   # Removes object files
# make fclean  # Removes object files AND final program
# make re      # Complete rebuild: clean everything and recompile
# ```

# Think of it as:
# - `clean`: Partial cleanup
# - `fclean`: Complete cleanup
# - `re`: Complete cleanup + rebuild

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isspace.c ft_strlen.c\
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c\
	  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	  ft_atoi.c ft_atol.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
	  ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	  ft_putnbr_fd.c

OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_isspace.o ft_strlen.o\
	   ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o\
	   ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o\
	   ft_atoi.o ft_atol.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o\
	   ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o\
	   ft_putnbr_fd.o

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus
