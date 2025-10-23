/* ************************************************************************** */
/*                                                                            */
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
	printf("%d\n",len);
	printf("%d\n", n);
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	if (n_l < 0)
	{
		n_l *= -1;
		*str = '-';
	}
	while (n_l > 9)
	{
		str++;
		n_l -= n_l * (0,1 * lenn); // niet goed, ff wiskunde doen
		*str = n_l + 48;
		n_l /= 10;
	}
	return (str);
}

int	main()
{
	int	n = 1234567;
	printf("%s\n", ft_itoa(n));
	return (0);
}
