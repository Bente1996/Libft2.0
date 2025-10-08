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

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	printf("%ld\n", cdest - csrc);
	if(cdest - csrc < (int)n)
	{
		cdest += n - 1;
		csrc += n - 1;
		while(n > 0)
		{
			*cdest-- = *csrc--;
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return(dest);
}

int	main()
{
	char	dest[] = "BBBBBBBBBBBBBBB";
	char	src[] = "AAAAAAAAAAAAAAA";

	printf("%s\n", (char *)ft_memmove(dest, src, 6));
	return(0);
}

