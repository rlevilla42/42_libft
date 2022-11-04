/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 01:34:22 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/19 17:39:03 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr_node;

	curr_node = *lst;
	if (lst == NULL || new == NULL)
		return (0);
	if (*lst == NULL)
		*lst = new;
	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
	}
	curr_node->next = new;
	new->next = NULL;
}
