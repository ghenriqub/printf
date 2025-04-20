# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 12:46:50 by ghenriqu          #+#    #+#              #
#    Updated: 2025/04/19 14:45:20 by ghenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# name:
NAME = libftprintf.a

# compiler and flags:
CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

# basic and additional files:
SRC =	ft_puthex.c		\
		ft_putnbr.c		\
		ft_putstr.c		\
		ft_putchar.c	\
		ft_putptr.c		\
		ft_printf.c 

OBJ = $(SRC:.c=.o)

# standard rule:
all: $(NAME)

# compile and create the lib:
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# compile .o:
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# clean files:
clean:
	$(RM) $(OBJ)

# clean everything, .o and libft.a:
fclean: clean
	$(RM) $(NAME)

# recompile all:
re: fclean all

.PHONY: all re clean fclean
