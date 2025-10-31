/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_putchar_fd.c                                         :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/31 16:25:37 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/31 17:00:43 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//int	main()
//{
//	int	fd = 3;
//	char c = 'B';
//	ft_putchar_fd(c, fd);
//	return(0);
//}
