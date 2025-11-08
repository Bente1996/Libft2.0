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

size_t	str_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count += 1;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

size_t	str_len(char *s, char c)
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
	printf("%s\n", s);
	return (len);
}


char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	strings;
	char	**split_begin;
	size_t	len;

	strings = str_count(s, c);
	split = malloc(sizeof(char *) * strings + 1);
	if (!split)
		return (NULL);
	split_begin = split;
	len = str_len((char *)s, c);
	*split = ft_substr(s, s[0], len);
	//while (strings > 1)
	//{
	//	len = str_len((char *)s, c);
	//	*split = ft_substr(s, s[0], len);
	//	split++;
	//	strings--;
	//}
	*split = NULL;
	split -= strings + 1;
	return (split_begin);
}

int	main()
{
	char	s[] = "  sdas  deze gaan we splitten   hshaj";
	char	c = ' ';
	char	**split;

	split = ft_split(s, c);
	while (*split)
	{
		printf("%s\n", *split);
		split++;
	}
	return (0);
}

//char	**ft_split(char const *s, char c)
//{
//	char	**split;
//	size_t	i;
//	size_t	del_count;
//	size_t	j;
//	size_t	str;
//	size_t	**s_len;
//	size_t	**len_s;
//
//	i = 0;
//	j = 0;
//	str = 0;
//	del_count = 0;
//	while (s[i] != '\0')
//	{
//		if (s[i] == c)
//			del_count += 1;
//		i++;
//	}
//	split = malloc(sizeof(char *) * (del_count + 1) + 1);
//	if (!split)
//		return (NULL);
//	s_len = malloc(sizeof(int *) * (del_count + 1) + 1);
//	if (!s_len)
//		return (NULL);
//	len_s = s_len;
//	i = 0;
//	while (s[i] != '\0' && s[i] != c) // allocceer alle strings
//	{
//		i++;
//		if (s[i] == '\0' || s[i] == c)
//		{
//			*s_len = i;
//			s_len++;
//			split[str] = malloc(sizeof(char) * i + 1);
//			if (!split[str])
//			{
//				//ft_free(split); // free all strings
//				free(split);
//				return (NULL);
//			}
//			str++;
//			if (s[i] == '\0')
//			{
//				split[str] = malloc(sizeof(NULL));
//				break ;
//			}
//		}
//	}
//	while (str > 1)
//	{
//		while (*len_s)
//		{
//			split[str][j++] = s[i++];
//			*len_s--;
//		}
//		split[str][j] = '\0';
//		str--;
//		i++;
//		len_s++;
//	}
//	return (split);
//}
