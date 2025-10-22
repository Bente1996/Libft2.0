/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_strnstr.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/16 16:26:33 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/16 17:45:34 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	printf("%ld\n", ft_strlen(little));
	const char	*start_little = little;
		printf("3\n");

	if (ft_strlen((char *)little) > ft_strlen((char *)big) || ft_strlen((char *)little) > len) // niet
																	   // nodigdenk
																	   // ik
		return (NULL);
	if (!(char *)little)
		return ((char *)big);
	printf("2\n");
	while (len > 0 && ft_strncmp(big, little, len)) // len check nodig met
													// size_t?
	{
		big++;
		len--;
	}
	while (len > 0 && !ft_strncmp(big, little, len))
	{
		big++;
		little++;
		len--;
		if (*little == '\0')
			return ((char *)start_little);
	}
	return (NULL);
}

int	main()
{
	char	big[] = "AAAAAAABBBBAAAAAAA";
	char	little[] = "BBBB";

	printf("%s\n", ft_strnstr(big, little, 1));
	//printf("%s\n", strnstr(big, little, 4));
	return (0);
}
