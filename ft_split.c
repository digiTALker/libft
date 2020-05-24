/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:40:33 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/24 19:48:53 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		how_many_slices(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if(s[i] == c && s[i] != s[i - 1] && s[i] != '\0')
			count++;
		if(s[i] != c && s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

static size_t	slice_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static void		*ft_purge(char **array, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{	
	char	**array;
	size_t	i;
	size_t	total;
	size_t	len;
	
	if (!s || !c)
		return (NULL);
	i = 0;
	total = 0;
	len = how_many_slices(s, c);
	if (!(array = (char**)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		while (s[total] && s[total] == c)
			total++;
		if(s[total] == '\0')		
		{
			array[i] = NULL;
			return (array);
			}
		array[i] = ft_substr(s, total, slice_len(&s[total], c));
		if (array[i] == NULL)
			return (ft_purge(array, i));
		while (s[total] && s[total] != c)
			total++;
		i++;
	}
	array[i] = NULL;
	return (array);
}
