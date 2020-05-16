/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 14:31:19 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/11 15:53:16 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*check_nol(char *p_s)
{
	size_t i;

	i = 0;
	while (p_s[i] != '\0')
	{
		if (p_s[i] == '\0')
			return (p_s + i + 1);
		i++;
	}
	return (0);
}

char			*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p_buff;
	char	*p_s;

	p_s = (char *)s;
	i = 0;
	p_buff = (char *)s;
	while (s[i] != '\0')
	{
		if (c == '\0')
			return (check_nol(p_s));
		if (s[i] == c)
			return (p_buff + i);
		i++;
	}
	return (NULL);
}
