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

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

//int	main()
//{
//	t_list *one;
//	one = malloc(sizeof(t_list));
//	if (!one)
//		return (0);
//	t_list *two;
//	two = malloc(sizeof(t_list));
//	if (!two)
//		return (0);
//	t_list *three;
//	three = malloc(sizeof(t_list));
//	if (!three)
//		return (0);
//	t_list *four;
//	four = malloc(sizeof(t_list));
//	if (!four)
//		return (0);
//	one->next = two;
//	two->next = three;
//	three->next = four;
//	four->next = NULL;
//
//	printf("%p\n", one);
//	printf("%p\n", four);
//	printf("%p\n", ft_lstlast(one));
//	return (0);
//}
