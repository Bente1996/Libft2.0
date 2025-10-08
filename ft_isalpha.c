/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_isalpha.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/07 16:30:13 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/07 17:25:30 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return(1);
	return(0);
}

//int	main()
//{
//	printf("%d\n", ft_isalpha('B'));
//	return(0);
//}
