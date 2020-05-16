/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 11:59:40 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/11 12:55:30 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isup(int c)
{
	return (c >= 'A' && c <= 'Z');
}

static	int		ft_islw(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isalpha(int c)
{
	return (ft_isup(c) || ft_islw(c));
}
