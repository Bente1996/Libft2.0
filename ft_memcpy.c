/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_memcpy.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/08 20:57:36 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/08 21:47:29 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	while(n)
	{
		*cdest++ = *csrc++;
		n--;
	}
	return(dest);
}

//int	main()
//{
//	return(0);
//}
