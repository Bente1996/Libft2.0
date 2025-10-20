/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_substr.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/20 17:58:10 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/20 18:14:12 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}

int	main()
{
	char	s[] = "AAABAAAAAAAA";

	printf("%s\n", ft_substr(s, 3, 25));
	return (0);
}
