/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 12:54:21 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/23 09:51:19 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*zero(void)
{
	char	*p_buff;

	if ((p_buff = (char *)ft_calloc(sizeof(char), 2)) == NULL)
		return (NULL);
	p_buff[0] = '0';
	p_buff[1] = '\0';
	return (p_buff);
}

static char			*below_zero(int n, size_t size)
{
	char	*p_buff;
	int		n_tmp;

	n_tmp = -n;
	if ((p_buff = (char *)ft_calloc(size + 1, sizeof(char))) == NULL)
		return (NULL);
	*p_buff = '-';
	while (n_tmp > 0)
	{
		p_buff[size - 1] = (n_tmp % 10) + 48;
		n_tmp = n_tmp / 10;
		size--;
	}
	return (p_buff);
}

static char			*above_zero(int n, size_t size)
{
	char	*p_buff;
	int		n_tmp;

	n_tmp = n;
	if ((p_buff = ft_calloc(size + 1, sizeof(char))) == NULL)
		return (NULL);
	while (n_tmp > 0)
	{
		p_buff[size - 1] = (n_tmp % 10) + 48;
		n_tmp = n_tmp / 10;
		size--;
	}
	return (p_buff);
}

char				*ft_itoa(int n)
{
	size_t	n_tmp;
	size_t	size;

	if (n < 0)
		n = -n;
	n_tmp = n;
	size = 0;
	if (n != 0)
	{
		while (n_tmp)
		{
			n_tmp = n_tmp / 10;
			size++;
		}
	}
	if (n < 0)
		return (below_zero(n, size));
	if (n == 0)
		return (zero());
	if (n > 0)
		return (above_zero(n, size));
	return (0);
}

int			main()
{

			char	*i1 = ft_itoa(-623);
			char	*i2 = ft_itoa(156);
			char	*i3 = ft_itoa(-0);

			if (strcmp(i1, "-623")) {
				
				return(0);
			}
			if (strcmp(i2, "156")) {
				
				return(0);
			}
			if (strcmp("0", i3)) {
			
				return(0);
			}
			exit(1);
			
}