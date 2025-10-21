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
	const char	*end;

	printf("%s\n", set);
	while (*s1)
	{
		set = &set[0];
		while (*set && ft_strchr(set, *s1))
			set++;
		if (!ft_strchr(set, *s1))
			break ;
		s1++;
	}
	printf("%s\n", s1);
	printf("%c\n", *s1);
	end = &s1[ft_strlen(s1)];
	printf("2\n");
	while (end > s1)
	{
		set = &set[0];
		while (*set && ft_strchr(set, *end))
			set++;
		if (!ft_strchr(set, *end))
			break ;
		end--;
	}
	return (ft_substr(s1, 0, end - s1));
}

int	main()
{
	char	str[] = "stringbbbb bente is string";
	char	set[] = "string";

	printf("%s\n", ft_strtrim(str, set));
	return (0);
}
