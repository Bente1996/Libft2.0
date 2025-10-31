/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_putstr_fd.c                                          :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/31 16:51:31 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/31 17:01:27 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while(*s)
		write(fd, &*s++, 1);
}

//int	main()
//{
//	int	fd = 1;
//	char	s[] = "stringeling";
//	ft_putstr_fd(s, fd);
//	return (0);
//}
