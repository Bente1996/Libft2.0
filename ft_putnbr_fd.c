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

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	long	n_long;
	int	len;
	int	i;

	n_long = n;
	s = NULL;
	i = 0;
	if (n_long < 0)
	{
		ft_putchar_fd('-', fd);
		n_long *= -1;
	}
	if (n_long > 0)
		ft_putnbr_fd(n_long / 10, fd);
	n_long = (n_long % 10) + 48;
	s[i] = n_long;
	i++;
	if (n_long == '0')
	{
		len = ft_strlen(s);
		while (len > 0)
		{
			write(fd, &s[i--], 1);
			len--;
		}
	}
}

int	main()
{
	int n = 12345;
	int fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
}
