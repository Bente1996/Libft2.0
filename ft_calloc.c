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
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = NULL;
	if(SIZE_MAX / size > nmemb)
	{
		ptr = malloc(nmemb * size);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, nmemb * size);
	}
	return (ptr);
}

int	main()
{
	printf("%p\n", ft_calloc(3, 12345));
	printf("%p\n", calloc(3, 12345));
	printf("%p\n", ft_calloc(3, SIZE_MAX));
	printf("%p\n", calloc(3, SIZE_MAX));
	return (0);
}
