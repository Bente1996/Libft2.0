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
	if (!lst)
		return;
	f(lst->content);
	ft_lstiter(lst->next, f);
}

//void	f(char *node_content)
//{
//	while (*node_content)
//		*node_content++ += 4;
//}

//int	main()
//{
//	t_list	*one = malloc(sizeof(t_list));
//	if (!one)
//		return (0);
//	t_list	*two = malloc(sizeof(t_list));
//	if (!two)
//		return (0);
//	t_list	*three =  malloc(sizeof(t_list));
//	if (!three)
//		return (0);
//	t_list	*four = malloc(sizeof(t_list));
//	if (!four)
//		return (0);
//
//	char	s_one[] = "abcd";
//	one->content = s_one;
//	one->next = two;
//	char	s_two[] = "bcde";
//	two->content = s_two;
//	two->next = three;
//	char	s_three[] = "cdef";
//	three->content = s_three;
//	three->next = four;
//	char	s_four[] = "defg";
//	four->content = s_four;
//	four->next = NULL;
//	ft_lstiter(one, (void (*)(void *))f);
//	printf("%s\n", (char *)one->content);
//	printf("%s\n", (char *)two->content);
//	printf("%s\n", (char *)three->content);
//	printf("%s\n", (char *)four->content);
//	return (0);
//}
