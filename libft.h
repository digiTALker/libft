/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 22:32:00 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/05 12:24:37 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /*write*/
#include <string.h> /*memset memcpy memccpy*/
#include <stdlib.h> /*size_t*/

void ft_putchar_fd(char c, int fd);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memset(void *s, int c, size_t n);