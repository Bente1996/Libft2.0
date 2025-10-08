/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_isascii.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/07 17:39:41 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/07 17:45:38 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return(1);
	return(0);
}

int	main()
{
	printf("%d\n", ft_isascii(128));
	return(0);
}
