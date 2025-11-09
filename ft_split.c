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
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

int	str_count(const char *s, char c)
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

size_t	split_free(char **split)
{
	int	j;

	j = 0;
	while (*split[j] != '\0')
	{
		free(split[j]);
		j++;
	}
	free(split);
	return (0);
}

size_t	str_split(char **split, char *s, char c, int j)
{
	size_t	len;
	size_t	i;
	size_t	delim;

	len = 0;
	i = 0;
	delim = 0;
	while (s[i] == c && s[i] != '\0')
	{
		delim++;
		i++;
	}
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	while (s[i] == c && s[i] != '\0')
		i++;
	s += delim;
	split[j] = ft_substr(s, 0, len);
	if (!split[j])
		return (split_free(split));
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		strings;
	size_t	i;
	int		j;

	j = 0;
	strings = str_count(s, c);
	split = malloc(sizeof(char *) * strings + 1);
	if (!split)
		return (NULL);
	while (strings > 0)
	{
		i = str_split(split, (char *)s, c, j);
		if (!i)
			return (NULL);
		s += i;
		j++;
		strings--;
	}
	split[j] = NULL;
	return (split);
}

int	main(void)
{
	const char	s[] = "Hello, World! Hello, Universe! gom";
	const char	c = ' ';
	char		**store;
	char		**split;

	split = ft_split(s, c);
	store = split;
	while (*split)
	{
		printf("%s\n", *split);
		free(*split);
		split++;
	}
	free(store);
	return (0);
}
