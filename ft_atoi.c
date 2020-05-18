/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 23:28:32 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/18 11:12:46 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	ft_atoi(const char *str)
{
	int	i;
	int	neg_flag;
	int	result;

	if (!str)
		return (0);
	i = 0;
	while ((7 < str[i] && str[i] < 13) || str[i] == ' ')
		i++;
	neg_flag = (str[i] == '-') ? -1 : 1;
	if (neg_flag == -1 || str[i] == '+')
		i++;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - '0');
	return (result * neg_flag);
}
