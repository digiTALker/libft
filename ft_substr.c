/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:36:54 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/19 19:44:06 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p_temps;

	p_temps = (char*)malloc(sizeof(*s) * (len + 1));
	if (!p_temps)
		return (NULL);
	j = 0;
	i = 0 + start;
	while (s[i] && j < len)
	{
		if (i >= start && j < len)
		{
			p_temps[j] = s[i];
			j++;
		}
		i++;
	}
	p_temps[j] = '\0';
	return (p_temps);
}
