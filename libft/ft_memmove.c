/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 22:40:51 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/27 21:32:58 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dest == src)
		return (dest);
	if (src > dest)
	{
		while (i < n)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
		return (dest);
	}
	else if (src < dest)
	{
		while (n--)
		{
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
		}
		return (dest);
	}
	return (dest);
}
