/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strlcat.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/09 15:04:15 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/09 18:23:07 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// FUNCTION: Appends up to (size - dst_len) - 1 bytes from src to end of dst
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t	dst_len = ft_strlen(dst);

	if (size <= dst_len)
		return(ft_strlen(src) + size);
	dst += dst_len;
	size -= dst_len + 1;
	while(src && size)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return(dst_len + ft_strlen(src));
}

int	main()
{
	char	src[100] = "67AAAAA89";
	char	dst[100] = "BBBBBBBBB12"; //len 11
	ft_strlcat(dst, src, 14); // dest_len + 3 = 2 chars van src
	printf("%s\n", dst);
	return(0);
}
