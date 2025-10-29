/* ************************************************************************** */ /*                                                                            */
/*                                                            ::::::::        */
/*   ft_itoa.c                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/23 15:28:18 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/23 16:06:46 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	char	*str_start;
	long	l_n;
	int	len;
	long	n_l;

	l_n = n;
	n_l = n;
	len = 1;
	if (l_n < 0)
	{
		l_n *= -1;
		len = 2;
	}
	while (l_n > 9)
	{
		l_n /= 10;
		len++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str_start = str;
	if (n_l < 0)
	{
		n_l *= -1;
		*str = '-';
	}
	str += len - 1;
	while (n_l > 9)
	{
		*str = (n_l % 10) + 48;
		n_l /= 10;
		str--;
	}
	*str = (n_l % 10) + 48;
	return (str_start);
}

int	main()
{
	int	n = -2147483649;
	printf("%s\n", ft_itoa(n));
	int a = 0 % 10;
	printf("%d\n", a);
	return (0);
}
