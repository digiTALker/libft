/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 22:40:51 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/09 16:59:03 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t i;
    i = 0;
    
    if (src > dest)
    {
        while (n > 0 && dest && src)
        {
            *((char *)dest + i) = *((char *)src + i);
            i++;
            n--;
        }
        return (dest);
        
    }
    if (src < dest)
    {
        while (n > 0 && (*(char *)dest + i) != '\0' && (*(char *)src + i) != '\0')
        {
            *((char *)dest + i) = *((char *)src + i);
            i++;
            n--;
        }
        return (dest);
        
    }
}

int main(void)
{
  char str[SIZE], *p;

  strcpy(str, "ABCDEFGH1234567890");
  p = str + 5;

  ft_memmove(str+16, p, 13);
  printf("result of move: %s", str);

  return 0;
}
