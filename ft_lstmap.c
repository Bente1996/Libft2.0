/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ft_lstmap.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/11/05 18:52:48 by bede-kon            #+#    #+#           */
/*   Updated: 2025/11/06 01:31:06 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list *new_node;

	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

void	*f(char *node_content)
{
	char	*f_content;

	f_content = node_content;
	while (*node_content)
		*node_content++ += 4;
	return (f_content);
}

void	del(char *node_content)
{
	while (*node_content)
		*node_content++ = 0;
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

	char	s_one[] = "abcd";
	one->content = s_one;
	one->next = two;
	char	s_two[] = "bcde";
	two->content = s_two;
	two->next = three;
	char	s_three[] = "cdef";
	three->content = s_three;
	three->next = four;
	char	s_four[] = "defg";
	four->content = s_four;
	four->next = NULL;
	printf("%s\n", (char *)one->content);
	printf("%s\n", (char *)two->content);
	printf("%s\n", (char *)three->content);
	printf("%s\n", (char *)four->content);
	one = ft_lstmap(one, (void *(*)(void *))f, (void (*)(void *))del);
	printf("new list:\n");
	printf("%s\n", (char *)one->content);
	printf("%s\n", (char *)two->content);
	printf("%s\n", (char *)three->content);
	printf("%s\n", (char *)four->content);
	return (0);
}
