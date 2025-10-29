/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strtrim.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/20 21:37:45 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/20 22:27:16 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*begin;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	begin = (char *)s1;
	s1 += ft_strlen(s1) - 1;
	while (ft_strchr(set, *s1))
		s1--;
	begin = ft_substr(begin, 0, s1 + 1 - begin);
	if (!begin)
		return (NULL);
	return (begin);
}

int	main()
{
	char	str[] = "stringbbbb bente is string";
	char	set[] = "string";

	printf("%s\n", ft_strtrim(str, set));
	return (0);
}
