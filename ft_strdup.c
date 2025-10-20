/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strdup.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/20 17:23:07 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/20 17:57:21 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, ft_strlen(s) + 1);
	return (dup);
}

int	main()
{
	char	s[] = "";
	printf("%s\n", ft_strdup(s));
	printf("%s\n", strdup(s));
	return (0);
}
