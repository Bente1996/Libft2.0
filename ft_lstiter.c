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

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst->next)
	{
		f(lst->content);
		lst = lst->next;
	}
	f(lst->content);
}

void	f(void *node) // is dit mogelijk met void *?
{
}

int	main()
{
	t_list	*one = malloc(sizeof(t_list));
	if (!one)
		return (0);
	t_list	*two = malloc(sizeof(t_list));
	if (!two)
		return (0);
	t_list	*three =  malloc(sizeof(t_list));
	if (!three)
		return (0);
	t_list	*four = malloc(sizeof(t_list));
	if (!four)
		return (0);

	one->content = "abcd";
	one->next = two;
	two->content = "bcde";
	two->next = three;
	three->content = "cdef";
	three->next = four;
	four->content = "defg";
	four->next = NULL;
	ft_lstiter(one, f);
	printf("%s\n", (char *)one->content);
	printf("%s\n", (char *)two->content);
	printf("%s\n", (char *)three->content);
	printf("%s\n", (char *)four->content);
	return (0);
}
