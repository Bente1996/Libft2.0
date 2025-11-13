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

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t	dst_len = ft_strlen(dst);

	if (size <= dst_len)
		return (ft_strlen(src) + size);
	dst += dst_len;
	size -= dst_len;
	ft_strlcpy(dst, src, size);
	return (dst_len + ft_strlen(src));
}
