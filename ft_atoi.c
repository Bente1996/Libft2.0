/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_atoi.c                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/17 16:18:33 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/17 16:42:12 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	converted;

	sign = 1;
	converted = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n' || *nptr == '\r' || \
	*nptr == '\r' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
		if (*nptr == '-' || *nptr == '+')
			return (0);
	}
	while (*nptr >= '0' && *nptr <= '9')
		converted = (*nptr++ - 48) + (10 * converted);
	return (converted * sign);
}

int	main()
{
	char	str[] = "  \f -73473289";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return(0);
}
