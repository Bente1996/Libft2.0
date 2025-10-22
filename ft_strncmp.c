/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strncmp.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/09 18:50:37 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/09 19:05:19 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while(n)
	{
		if(*s1 != *s2)
			return(*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	return(0);
}

//int	main()
//{
//	char	s1[] = "cc";
//	char	s2[] = "bbbbb";
//
//	printf("%d\n", ft_strncmp(s1, s2, 1));
//	return(0);
//}
