/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_calloc.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/20 16:18:57 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/20 17:14:36 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	memory;
	void	*ptr;

	ptr = 0;
	memory = nmemb * size;
	if (memory == 0)
		return (ptr);
	printf("%ld\n", memory);
	printf("%d\n", INT_MAX);
	if (memory > INT_MAX)
		return ((void *)"int overflow error\n");
	ptr = malloc(memory);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, memory);
	return (ptr);
}

int	main()
{
	printf("%p\n", ft_calloc(214, 21474836));
	printf("%p\n", calloc(214, 21474836));
	return (0);
}
