/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strjoin.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/20 18:14:53 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/20 18:39:49 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined;

	joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (0);
	ft_strlcpy(joined, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&joined[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	return (joined);
}

int	main()
{
	char		s1[] = "AAA";
	char		s2[] = "BBBBBB";
	char *const	result = ft_strjoin(s1, s2); // ALLOC

	printf("%s\n", result); // DOESNT FREE
	free(result); // FREE
	return (0);
}
