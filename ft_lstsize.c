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

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int	count;
	count = 1;
	while (lst->next)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

int	main()
{
	t_list *one;
	one = malloc(sizeof(t_list));
	if (!one)
		return (0);
	t_list *two;
	two = malloc(sizeof(t_list));
	if (!two)
		return (0);
	t_list *three;
	three = malloc(sizeof(t_list));
	if (!three)
		return (0);
	t_list *four;
	four = malloc(sizeof(t_list));
	if (!four)
		return (0);

	one->next = two;
	two->next = three;
	three->next = four;
	four->next = NULL;

	printf("%d\n", ft_lstsize(one));
	return (0);
}
