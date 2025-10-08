/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_isprint.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/07 17:44:54 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/07 19:20:17 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if(c >= ' ' && c <= '~')
		return(1);
	return(0);
}

int	main()
{
	printf("%d\n", ft_isprint('\v'));
	return(0);
}
