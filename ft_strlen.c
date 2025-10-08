/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strlen.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/07 17:54:58 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/07 18:00:53 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

int	main()
{
	printf("%zu\n", ft_strlen("zevenen"));
	return(0);
}
