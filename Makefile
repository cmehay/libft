#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmehay <cmehay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 15:09:23 by cmehay            #+#    #+#              #
#    Updated: 2013/11/22 11:26:05 by cmehay           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRCDIR = .
HEADDIR = .
HEAD = libft.h
HEADFILES = $(addprefix $(HEADDIR)/, $(HEAD))
SRC = ft_memset.c ft_putchar.c ft_putstr.c ft_bzero.c ft_putchar_fd.c \
	ft_putnbr.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putendl.c \
	ft_strlen.c ft_strcat.c ft_strncat.c ft_strtrim.c ft_isalpha.c \
	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_atoi.c ft_tolower.c \
	ft_toupper.c ft_memalloc.c ft_strnew.c ft_memcpy.c ft_memccpy.c \
	ft_memmove.c ft_memchr.c
SRCFILES = $(addprefix $(SRCDIR)/, $(SRC))
OBJ = $(SRC:.c=.o)
CC = gcc
AR = ar
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) rc $(NAME) $(OBJ)

$(OBJ): $(SRCFILES)
	$(CC) $(CFLAGS) -I$(HEADDIR) -c $?

.PHONY: clean fclean re

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
