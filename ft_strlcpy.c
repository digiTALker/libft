/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 12:04:37 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/22 18:55:07 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* bytes  to  dest,  always adds a terminating null byte, and does not pad
	 the destination with (further) null bytes.  This function fixes some of
	 the  problems of strcpy() and strncpy(), but the caller must still han‐
	 dle the possibility of data loss if size  is  too  small.   The  return
	 value  of the function is the length of src, which allows truncation to
	 be easily detected: if the return value is greater  than  or  equal  to
	 size,  truncation  occurred.   If loss of data matters, the caller must
	 either check the arguments before the call, or test the function return
	 value.   strlcpy()  is  not present in glibc and is not standardized by
	 POSIX, but is available on Linux via the libbsd library.*/
	   
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len;

	if (!dst || !src)
		return (0);
	len_src = ft_strlen(src);
	if (size)
	{
		if (len_src >= size)
			len = size - 1;
		else
			len = len_src;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (len_src);
}
