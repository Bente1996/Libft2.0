/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_putendl_fd.c                                         :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/31 18:05:34 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/31 18:28:09 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

int	main()
{
	int fd = 1;
	char	s[] = "this is a string";
	ft_putendl_fd(s, fd);
	return (0);
}
