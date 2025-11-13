/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_substr.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/20 17:58:10 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/20 18:14:12 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	sub = malloc(len + 1);
	if (sub)
		ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
