# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/05 21:59:14 by cmyrtle           #+#    #+#              #
#    Updated: 2020/05/19 21:50:33 by cmyrtle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -c
OBFLG =-Wall -Wextra -Werror -std=c99

SRC= ft_*.c
#	ft_isalnum.c\
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
	ft_putnbr_fd.c\ 
	#
	
NAME=libft.a

all: START

START:
	$(CC) $(SRC) $(OBFLG)
	ar rcs $(NAME) *.o	
	
$(NAME): 
	START

clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean	all