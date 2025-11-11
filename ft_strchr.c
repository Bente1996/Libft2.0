/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strchr.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/09 17:45:45 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/09 18:55:10 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}

int	main()
{
	char	s[] = "zoek naar de eerste c in de string";
	char	c = 'c'; 

	printf("%s\n", ft_strchr(s, c));
	return(0);
}
