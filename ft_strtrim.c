/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 14:03:02 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/22 18:57:42 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*rtn;

	if (!s1)
		return (NULL);	
	while (ft_strchr(set, *s1) && s1)
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len + 1]) && len)
	{
		len--;
	}
	rtn = ft_substr(s1, 0, len);
	return (rtn);
}
