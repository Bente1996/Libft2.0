/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   strrchr.c                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/09 18:29:19 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/09 18:38:50 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	s += s_len;
	while (s_len + 1)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		s_len--;
	}
	return (NULL);
}
