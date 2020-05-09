/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 22:32:00 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/09 19:06:14 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h> /*write*/
#include <string.h> /*memset memcpy memccpy*/
#include <stdlib.h> /*size_t*/

void	ft_putchar_fd(char c, int fd);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);

#endif