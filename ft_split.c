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

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	del_count;
	size_t	j;
	size_t	str;
	size_t	**s_len;
	size_t	**len_s;

	i = 0;
	j = 0;
	str = 0;
	del_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			del_count += 1;
		i++;
	}
	split = malloc(sizeof(char *) * (del_count + 1) + 1);
	if (!split)
		return (NULL);
	s_len = malloc(sizeof(int *) * (del_count + 1) + 1);
	if (!s_len)
		return (NULL);
	len_s = s_len;
	i = 0;
	while (s[i] != '\0' && s[i] != c) // allocceer alle strings
	{
		i++;
		if (s[i] == '\0' || s[i] == c)
		{
			*s_len = i;
			s_len++;
			split[str] = malloc(sizeof(char) * i + 1);
			if (!split[str])
			{
				//ft_free(split); // free all strings
				free(split);
				return (NULL);
			}
			str++;
			if (s[i] == '\0')
			{
				split[str] = malloc(sizeof(NULL));
				break ;
			}
		}
	}
	while (str > 1)
	{
		while (*len_s)
		{
			split[str][j++] = s[i++];
			*len_s--;
		}
		split[str][j] = '\0';
		str--;
		i++;
		len_s++;
	}
	return (split);
}

int	main()
{
	char	s[] = "deze gaan we splitten";
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





























































//void	ft_free(char **s, size_t s_count)
//{
//	while (s_count)
//	{
//		free((void *)s);
//		s--;
//		s_count--;
//	}
//}
//
//void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
//{
//	void	*new;
//	size_t	unchanged;
//
//	if (old_size == new_size)
//		return (ptr);
//	if (!ptr && new_size)
//		return (malloc(new_size));
//	if (new_size == 0 && ptr)
//	{
//		free(ptr);
//		return (NULL);
//	}
//	new = malloc(new_size);
//	if (!new)
//	{
//		free(ptr);
//		return (NULL);
//	}
//	unchanged = old_size;
//	if (old_size > new_size)
//		unchanged = new_size;
//	ft_memcpy(new, ptr, unchanged);
//	free(ptr);
//	return (new);
//}
//
//char	**ft_split(const char *s, char c)
//{
//	char	**str_array;
//	unsigned int	i;
//	size_t	s_len;
//	size_t	s_count;
//
//	i = 0;
//	s_len = 0;
//	s_count = 1;
//	str_array = NULL;
//	printf("1\n");
//	while (*s)
//	{
//		s_len++;
//		if (*s == c)
//		{
//			*str_array = ft_substr(s, i, s_len - 1);
//			if (!*str_array)
//				ft_free(str_array, s_count);
//			str_array++;
//			s_count += 1;
//			s_len = 0;
//		}
//		i++;
//	}
//	str_array = NULL;
//	return (str_array - s_count);
//}
//
//int	main()
//{
//	char	str[] = "splitsen op de spatie";
//	char	c = ' ';
//	char	**str_array;
//
//	str_array = ft_split(str, c);
//	printf("%s\n", *str_array);
//	return (0);
//}
