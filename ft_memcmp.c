/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_memcmp.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/16 16:14:23 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/16 16:25:03 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_strncmp((char *)s1, (char *)s2, n));
}

int	main()
{
	char	s1[] = "A";
	char	s2[] = "B";

	printf("%d\n", ft_memcmp(s1, s2, 1));
	return(0);
}
