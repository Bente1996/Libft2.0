/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_isalnum.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/07 16:29:47 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/07 17:29:07 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if(ft_isalpha(c) + ft_isdigit(c) > 0)
		return(1);
	return(0);
}

int	main()
{
	printf("%d\n", ft_isalnum(10));
	return(0);
}
