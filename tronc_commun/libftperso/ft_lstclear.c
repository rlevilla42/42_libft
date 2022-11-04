/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:16:55 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/17 15:40:01 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr_node;
	t_list	*node_todel;

	curr_node = *lst;
	node_todel = *lst;
	if (lst == NULL || del == NULL)
		return ;
	while (node_todel->next != NULL)
	{
		curr_node = node_todel->next;
		del(node_todel);
		free(node_todel);
		node_todel = curr_node;
	}
	*lst = NULL;
}
