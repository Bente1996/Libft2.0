/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_memmove.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/08 17:10:45 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/08 18:26:20 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc = (char *)src;

	if (!dest && !src)
		return (0);
	cdest = (char *)dest;
	if ((size_t)(cdest - csrc) < n)
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n)
		{
			*cdest-- = *csrc--;
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
