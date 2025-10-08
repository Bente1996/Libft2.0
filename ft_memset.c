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

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*byte;

	byte = (char *)s;
	while(byte && n > 0)
	{
		*byte++ = c;
		n--;
	}
	return(s);
}

/*int	main()*/
/*{*/
/*	char	str[] = "dit is een string";*/
/**/
/*	printf("%s\n", (char *)ft_memset(str, 'B', 8));*/
/*	return(0);*/
/*}*/
