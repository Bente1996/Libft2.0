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

static
size_t	n_len(long	n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len = 2;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static
void	make_str(long n, char *str, size_t len)
{
	if (n < 0)
	{
		n *= -1;
		*str = '-';
	}
	str += len - 1;
	while (n > 9)
	{
		*str = (n % 10) + 48;
		n /= 10;
		str--;
	}
	*str = (n % 10) + 48;
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*str_start;
	size_t	len;

	len = n_len(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str_start = str;
	make_str(n, str, len);
	return (str_start);
}

int	main()
{
	int	n = -2147483648;
	printf("%s\n", ft_itoa(n));
	int	intje = 15275;
	printf("%s\n", ft_itoa(intje));
	return (0);
}
