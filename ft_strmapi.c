/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strmapi.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/21 14:39:08 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/21 15:17:02 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*s_f;
	unsigned int	i;

	i = 0;
	s_f = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s_f)
		return (NULL);
	while (s[i])
	{
		s_f[i] = f(i, s[i]);
		i++;
	}
	s_f[i] = '\0';
	return (s_f);
}
