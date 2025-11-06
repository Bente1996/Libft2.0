/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstclear.c                                           :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/04 20:05:16 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/04 21:54:41 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old_lst;

	while (lst)
	{
		del((*lst)->content);
		old_lst = *lst;
		*lst = (*lst)->next;
		free(old_lst);
	}
	lst = NULL;
}

void	ft_lstclear_recursive(t_list **lst, void (*del)(void *))
{
	if (!*lst)
		return ;
	del((*lst)->content);
	ft_lstclear_recursive(&(*lst)->next, (void (*)(void *))del);
	free(*lst);
	*lst = NULL;
}

//void	del(char *node_content)
//{
//	while (*node_content)
//		*node_content++ = 0;
//}

//int	main()
//{
//	t_list	**list = malloc(sizeof(t_list));
//	if (!list)
//		return (0);
//	t_list	*one = malloc(sizeof(t_list));
//	if (!one)
//		return (0);
//	t_list	*two = malloc(sizeof(t_list));
//	if (!two)
//		return (0);
//	t_list	*three = malloc(sizeof(t_list));
//	if (!three)
//		return (0);
//	t_list	*four = malloc(sizeof(t_list));
//	if (!four)
//		return (0);
//
//	*list = one;
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
//	//ft_lstclear_recursive(list, (void (*)(void *))del);
//	ft_lstclear(list, (void (*)(void *))del);
//	printf("should segfault now");
//	printf("%s\n", (char *)one->content);
//	printf("%s\n", (char *)two->content);
//	printf("%s\n", (char *)three->content);
//	printf("%s\n", (char *)four->content);
//	return (0);
//}
