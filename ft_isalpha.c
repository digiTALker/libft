/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 11:59:40 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/18 22:56:04 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		is_up(int c)
{
	return (c >= 'A' && c <= 'Z');
}

static	int		is_lw(int c)
{
	return (c >= 'a' && c <= 'z');
}

int				ft_isalpha(int c)
{
	return (is_up(c) || is_lw(c));
}
