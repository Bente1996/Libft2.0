/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_split.c                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/20 22:34:51 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/20 22:45:44 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	**ft_split(const char *s, char c)
{
	char	**str_array;
	unsigned int	i;
	size_t	s_len;
	size_t	s_count;

	i = 0;
	s_len = 0;
	while (*s)
	{
		s_len++;
		if (*s == c)
		{
			*str_array = ft_substr(s, i, s_len - 1);
			str_array++;
			s_count += 1;
			s_len = 0;
		}
		i++;
	}
	**str_array = NULL;
	free((void *)s);
	return (str_array - s_count);
}

int	main()
{
	char	str[] = "splitsen op de spatie";
	char	c = ' ';
	char	str_array[][];

	str_array = ft_split(str, c);
	printf("%s\n", *str_array);
	return (0);
}
