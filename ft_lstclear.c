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

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old_lst;

	while (*lst)
	{
		del((*lst)->content);
		old_lst = *lst;
		*lst = (*lst)->next;
		free(old_lst);
	}
	*lst = NULL;
}
