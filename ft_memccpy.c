/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 16:09:42 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/07 21:23:57 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *p_src;
	unsigned char *p_dst;

	p_src = (const unsigned char *)src;
	p_dst = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		if (*(p_dst + i) == (unsigned char *)c)
		{
			return (p_dst + i + 1);
		}
		*(p_dst + i) = *(p_src + i);
		i++;
	}
	return (NULL);
}
