/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstadd_front.c                                       :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/03 13:56:58 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/03 14:06:19 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int	main()
{
	t_list **lst;
	t_list *first;
	t_list *new;
	
	lst = malloc(sizeof(t_list));
	if (!lst)
		return (0);
	first = malloc(sizeof(t_list));
	if (!first)
		return (0);
	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	*lst = first;
	printf("%p\n", *lst);
	printf("%p\n", first);
	printf("%p\n", new);
	ft_lstadd_front(lst, new);
	printf("%p\n", *lst);
	return (0);
}
