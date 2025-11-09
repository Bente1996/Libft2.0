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

#include <stdio.h>
#include "libft.h"
#include <unistd.h>
#include <limits.h>

static
void	fill_buffer(char buf[11], size_t len, long n)
{
	while (len)
	{
		buf[len--] = (n % 10) + '0';
		n /= 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	n_long;
	long	long_n;
	size_t	len;
	size_t	leng;
	char	buf[11];

	n_long = n;
	len = 1;
	if (n_long < 0)
	{
		ft_putchar_fd('-', fd);
		n_long *= -1;
	}
	long_n = n_long;
	while (n_long > 9)
	{
		n_long /= 10;
		len++;
	}
	leng = len;
	fill_buffer(buf, len, long_n);
	write(fd, buf + 1, leng);
}

int	main()
{
	int fd = STDOUT_FILENO;
	ft_putstr_fd("INT_MIN: ", fd);
	ft_putnbr_fd(INT_MIN, fd);
	ft_putchar_fd('\n', fd);
	ft_putstr_fd("INT_MAX: ", fd);
	ft_putnbr_fd(INT_MAX, fd);
	ft_putchar_fd('\n', fd);
	ft_putstr_fd("0: ", fd);
	ft_putnbr_fd(0, fd);
	ft_putchar_fd('\n', fd);
	ft_putstr_fd("123: ", fd);
	ft_putnbr_fd(123, fd);
	ft_putchar_fd('\n', fd);
	ft_putstr_fd("-123: ", fd);
	ft_putnbr_fd(-123, fd);
	ft_putchar_fd('\n', fd);
	return (0);
}
