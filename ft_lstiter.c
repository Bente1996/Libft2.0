/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstiter.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/04 21:55:05 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/04 22:35:43 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	f(lst->content);
	ft_lstiter(lst->next, f);
}
