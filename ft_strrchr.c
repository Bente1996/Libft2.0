/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   strrchr.c                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/09 18:29:19 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/09 18:38:50 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	s_len = ft_strlen(s) + 1;
	s += s_len;
	while(s_len)
	{
		if(*s == c)
			return((char *)s);
		s_len--;
		s--;
	}
	return(NULL);
}

//int	main()
//{
//	char	s[] = "op zoek naar de laatste s in de string";
//	char	c = 's';
//	printf("%s\n", ft_strrchr(s, c));
//	return(0);
//}
