/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstclear.c                                           :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/04 20:05:16 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/04 21:54:41 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*last_node;

	printf("nodes\n");
	last_node = ft_lstlast(*lst);
	printf("%s\n", (char *)last_node->content);
	del(last_node->content);
	printf("%s\n", (char *)last_node->next);
	printf("%p\n", last_node);
	printf("%p\n", ft_lstlast(*lst));
	free(last_node); // hier gaat het mis, wel gealloceerd adres ... 
	printf("%s\n", (char *)last_node->content);
	while (*lst)
		ft_lstclear(lst, del);
	lst = NULL;
}

void	del(void *node_content)
{
}

int	main()
{
	t_list	**list = malloc(sizeof(t_list));
	if (!list)
		return (0);
	t_list	*one = malloc(sizeof(t_list));
	if (!one)
		return (0);
	t_list	*two = malloc(sizeof(t_list));
	if (!two)
		return (0);
	t_list	*three = malloc(sizeof(t_list));
	if (!three)
		return (0);
	t_list	*four = malloc(sizeof(t_list));
	if (!four)
		return (0);

	printf("%p\n", four);
	*list = one;
	one->content = "this is node 1";
	one->next = two;
	two->content = "this is node 2";
	two->next = three;
	three->content = "this is node 3";
	three->next = four;
	four->content = "this is node 4";
	four->next = NULL;
	ft_lstclear(list, del);
	printf("%s\n", (char *)one->content);
	printf("test");
	return (0);
}
