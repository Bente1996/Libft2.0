/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstadd_back.c                                        :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/03 17:22:07 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/03 17:55:08 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->next = new;
}

int	main()
{
	t_list **list;
	list = malloc(sizeof(t_list));
	if (!list)
		return (0);
	t_list *one;
	one = malloc(sizeof(t_list));
	if (!one)
		return (0);
	t_list *two;
	two = malloc(sizeof(t_list));
	if (!two)
		return (0);
	t_list *three;
	three = malloc(sizeof(t_list));
	if (!three)
		return (0);
	t_list *four;
	four = malloc(sizeof(t_list));
	if (!four)
		return (0);
	t_list	*new;
	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	*list = one;
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = NULL;

	printf("%p\n", new);
	printf("%p\n", ft_lstlast(*list));
	ft_lstadd_back(list, new);
	printf("%p\n", ft_lstlast(*list));
	return (0);
}
