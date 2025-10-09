/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_tolower.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/09 17:14:32 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/09 17:15:52 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_lower(int c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return(c);
}

int	main()
{
	char	c = 'A';

	printf("%c\n", ft_lower(c));
	return(0);
}
