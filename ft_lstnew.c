/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstnew.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/03 13:41:28 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/03 13:56:14 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int	main()
{
	t_list	*node;
	node = ft_lstnew("this is the content");
	printf("%s\n", (char *)node->content);
	return (0);
}
