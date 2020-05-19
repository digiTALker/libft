/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:40:33 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/19 19:50:16 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int		how_many_slices(char const *s, char c)
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

static void		*free_result(char **result, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

main()
{
	char *s = "asdfdsf asd";
	char c = 's';
  
	char	**result;
	size_t	i;
	size_t	len;
	size_t	total;
	
	i = 0;
	total = 0;
	len = how_many_slices(s, c);
	if (!(result = (char**)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		while (s[total] && s[total] == c)
			total++;
		result[i] = ft_substr(s, total, slice_len(&s[total], c));
		if (result[i] == NULL)
			return (free_result(result, i));
		while (s[total] && s[total] != c)
			total++;
		i++;
	}
	result[i] = NULL;
	return (result);
}
