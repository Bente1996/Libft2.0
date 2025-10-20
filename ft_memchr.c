/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_memchr.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/16 15:49:32 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/16 16:25:41 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str = (char *)s;

	while(n)
	{
		if(*str == c)
			return((void *)str);
		str++;
		n--;
	}
	return(NULL);
}
int	main()
{
	char	s[] = "searching for a c in the sentence";
	char	c = 'c';

	printf("%s\n", (char *)ft_memchr(s, c, 15));
	return(0);
}
