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

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
