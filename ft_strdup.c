/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 22:02:09 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/20 22:01:14 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p_str;
	size_t	i;

	if (!s1)
		return (NULL);
	p_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!p_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		p_str[i] = s1[i];
		i++;
	}
	p_str[i] = 0;
	return (p_str);
}
