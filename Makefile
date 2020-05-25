# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/05 21:59:14 by cmyrtle           #+#    #+#              #
#    Updated: 2020/05/25 09:05:37 by cmyrtle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
OBFLG=-Wall -Wextra -Werror
NAME=libft.a
HEADER =libft.h

SRC=ft_isalnum.c ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c\
	ft_toupper.c ft_tolower.c\
	ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c\
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
	ft_strnstr.c ft_strncmp.c\
	ft_atoi.c ft_itoa.c\
	ft_bzero.c ft_calloc.c\
	ft_strdup.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_substr.c\
	ft_split.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

OBJ =ft_atoi.o ft_itoa.o\
	ft_bzero.o\
	ft_calloc.o\
	ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o\
	ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o\
	ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o\
	ft_split.o\
	ft_strchr.o\
	ft_strdup.o ft_strjoin.o\
	ft_strlcat.o ft_strlcpy.o\
	ft_strlen.o ft_strmapi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o\
	ft_substr.o\
	ft_tolower.o ft_toupper.o

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(OBFLG)
	ar rcs $(NAME) *.o		

clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

so:
	$(CC) -c -fPIC $(SRC)
	$(CC) -shared -o libft.so $(SRC)