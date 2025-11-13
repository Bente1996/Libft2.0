/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_putnbr_fd.c                                          :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/31 17:02:17 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/31 17:12:03 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static
void	fill_buffer(char buf[11], size_t len, long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (len)
	{
		buf[len--] = (n % 10) + '0';
		n /= 10;
	}
}

static
size_t	n_len(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	len;
	char	buf[11];

	len = n_len(n);
	fill_buffer(buf, len, n, fd);
	write(fd, buf + 1, len);
}
