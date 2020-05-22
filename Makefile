# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/05 21:59:14 by cmyrtle           #+#    #+#              #
#    Updated: 2020/05/22 19:55:54 by cmyrtle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
OBFLG=-Wall -Wextra -Werror
NAME=libft.a

SRC=ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_tolower.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memccpy.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strlen.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strnstr.c\
	ft_strncmp.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c 

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