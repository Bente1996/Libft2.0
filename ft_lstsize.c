/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstsize.c                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/03 14:18:05 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/03 14:34:56 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
