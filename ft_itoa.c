/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_itoa.c                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/12 18:25:10 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/12 18:25:49 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static
size_t	n_len(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
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
		n = -n;
		*str = '-';
	}
	str += len;
	*str = '\0';
	str--;
	while (n > 9)
	{
		*str = (n % 10) + '0';
		n /= 10;
		str--;
	}
	*str = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = n_len(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	make_str(n, str, len);
	return (str);
}
