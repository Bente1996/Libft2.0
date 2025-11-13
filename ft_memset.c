/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_memset.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/07 18:01:27 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/07 19:16:10 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*byte;

	byte = (char *)s;
	while (n)
	{
		*byte++ = c;
		n--;
	}
	return (s);
}
