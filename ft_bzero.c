/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_bzero.c                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/07 19:49:11 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/07 19:50:16 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/**/
/*int	main()*/
/*{*/
/*	char	str[] = "this is a string";*/
/*	int		lim = strlen(str);*/
/*	ft_bzero(str, 6);*/
/*	for (int i = 0; i < lim; i++)*/
/*		printf("character %i: %c\n", i + 1, str[i]);*/
/*	printf("%s\n", str);*/
/*	return(0);*/
/*}*/
