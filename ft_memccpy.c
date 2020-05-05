/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 16:09:42 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/05 13:50:32 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char	*p_src;
	unsigned char	*p_dest;

	/*p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;*/
	p_src = &src;
	p_dest = &dest;
	i = 0;
	while (((p_dest[i]) != (char)c) || (i <= n))
	{
		*(p_dest + i) = *(p_src + i);
		i++;
		if (p_dest[i] == (char)c)
		{
			return ((void *)i + 1);
		}
		return (NULL);
	}
}

int main()
{
	void *dest = "sdfsdfdsf";
	void *src = "werwerer";
	int c = 3;
	size_t n = 4;

	ft_memccpy(dest, src, c, n);
	return 0;
}
