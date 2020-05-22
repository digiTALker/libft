/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:54:28 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/22 18:48:40 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p_s;
	char	*p_d;

	p_s = (char *)src;
	p_d = (char *)dest;
	i = 0;
	while (i <= n)
	{
		*(p_d + i) = *(p_s + i);
		i++;
	}
	return (p_d);
}
