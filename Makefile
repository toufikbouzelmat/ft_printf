# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 23:23:09 by tbouzalm          #+#    #+#              #
#    Updated: 2021/12/17 03:50:19 by tbouzalm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \
	  ft_putstr.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_unsigned.c \
	  ft_pointeur.c \
	  ft_hexa.c \
	  ft_hexa2.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ) ft_printf.h
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< 

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all
