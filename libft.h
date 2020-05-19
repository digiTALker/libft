/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 22:32:00 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/19 11:12:14 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h> /*write*/
#include <string.h> /*memset memcpy memccpy*/
#include <stdlib.h> /*size_t */

void		ft_putchar_fd(char c, int fd);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
size_t		ft_strlen(const char *s);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_strchr(const char *s, int c);
char		*strrchr(const char *s, int c);
char		*ft_strcpy(char *dst, const char *src);
void		*ft_calloc(size_t num, size_t size);
char		*ft_itoa(int n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int			strncmp(const char *s1, const char *s2, size_t n);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		ft_putendl_fd(char *s, int fd);
char		*ft_strdup(const char *s1);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char const *s, char c);

#endif