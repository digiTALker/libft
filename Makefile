# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/05 21:59:14 by cmyrtle           #+#    #+#              #
#    Updated: 2020/05/10 23:09:45 by cmyrtle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
OBFLG=-c -Wall -Wextra -Werror -std=c99

SRC=*.c
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
re: fclean
	all