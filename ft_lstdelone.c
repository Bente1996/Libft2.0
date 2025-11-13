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

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
