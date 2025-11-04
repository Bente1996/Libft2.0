/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstdelone.c                                          :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/03 17:55:47 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/03 18:00:37 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void	del(void *node_content)
{
}

int	main()
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = "this its the content";
	printf("%s\n", (char *)node->content);
	ft_lstdelone(node, del);
	printf("%s\n", (char *)node->content);
	return (0);
}
