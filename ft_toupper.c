/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_toupper.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/09 17:07:00 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/09 17:13:42 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		c -= 32;
	return(c);
}

int	main()
{
	char	c = 'a';

	printf("%c\n", ft_toupper(c));
	return(0);
}
