/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 00:07:38 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/17 15:56:42 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*curr_node;
	t_list	*nodetodel;

	curr_node = lst;
	nodetodel = lst;
	new_list = malloc(sizeof(t_list));
	if (lst == NULL || del == NULL || f == NULL || new_list == NULL)
		return (NULL);
	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
		new_list->content = f(nodetodel->content);
		del(nodetodel->content);
		free(nodetodel->content);
		nodetodel = curr_node;
		new_list->next = malloc(sizeof(t_list));
		if (new_list->next == NULL)
			return (0);
		new_list = new_list->next;
	}
	new_list->next = NULL;
	return (new_list);
}
//down is the git function
/*
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*beg_lst;
	t_list	*head;
	t_list	*node;

	if (lst == NULL || f == NULL)
		return (NULL);
	beg_lst = lst;
	if (!(head = ft_lstnew(f(beg_lst->content))))
		return (NULL);
	beg_lst = beg_lst->next;
	while (beg_lst != NULL)
	{
		if (!(node = ft_lstnew(f(beg_lst->content))))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		beg_lst = beg_lst->next;
	}
	return (head);
}
*/
/*
int main(void)
{
	int	i = 0;
	t_list	el1
	{
		int	age = 1;
		struct s_list	*next;
	}
	t_list el2
	{
		int	age = 2;
		struct s_list	*next;
	}
	t_list	el3
	{
		int	age = 3
		struct s_list	*next;
	}
	t_list	*curr_node;

	curr_node = &el1;
	el1.next = &el2;
	el2.next = &el3;
	el3.next = NULL;
	while (curr_node->next != NULL)
	{
		printf("content element %d = %d\n, i, ");
	}
}*/
