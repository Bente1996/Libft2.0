/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strlcpy.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/09 11:16:43 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/09 13:18:11 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const size_t	src_len = ft_strlen(src);

	if (size == 0)
		return(src_len);
	while(src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return(src_len);
}

int	main()
{
	char	src[] = "AAAAAAAAAA";
	char	dst[] = "BBBBBBBBBBBBB";
	ft_strlcpy(dst, src, 5);
	printf("%s\n", dst);
	return(0);
}
