/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:40:48 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/09 23:02:09 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	i = 0;

	while (n-- > 0)
	{
		if (((*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i)) != 0))
		{
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		}
		else
		{
			return (0);
		}
		i++;

	}
	
	
	return (0);
}