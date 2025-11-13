/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strncmp.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/09 18:50:37 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/09 19:05:19 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1 = (unsigned char *)s1;
	const unsigned char	*str2 = (unsigned char *)s2;

	while (n && *str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		n--;
		str1++;
		str2++;
	}
	if (n)
		return (*str1 - *str2);
	return (0);
}
