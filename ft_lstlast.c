/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstlast.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/03 17:02:33 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/03 17:49:49 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
