/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strnstr.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/16 16:26:33 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/16 17:45:34 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (!little[0])
		return ((char *)big);
	little_len = ft_strlen(little);
	while (*big && len >= little_len && ft_strncmp(big, little, little_len))
	{
		big++;
		len--;
	}
	if (len >= little_len && !ft_strncmp(big, little, little_len))
		return ((char *)big);
	return (NULL);
}
