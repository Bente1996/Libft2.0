/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_isdigit.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/07 16:30:03 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/07 18:35:31 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	return(0);
}

//int	main()
//{
//	printf("%d\n", ft_isdigit(9));
//	return(0);
//}
