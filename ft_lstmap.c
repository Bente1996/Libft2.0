/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstmap.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/05 18:52:48 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/06 01:31:06 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static
t_list	*safe_lstnew(void *content, void (*del)(void *))
{
	t_list *const	new = ft_lstnew(content);

	if (!new)
		del(content);
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst)
		return (NULL);
	new_lst = safe_lstnew(f(lst->content), del);
	if (!new_lst)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	lst = lst->next;
	while (lst)
	{
		new_node = safe_lstnew(f(lst->content), del);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
