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

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
