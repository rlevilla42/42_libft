/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 01:34:22 by rlevilla          #+#    #+#             */
/*   Updated: 2022/11/03 18:00:55 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*curr_node;

	curr_node = *alst;
	if (alst == NULL || new == NULL)
		return (0);
	if (*alst == NULL)
		*alst = new;
	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
	}
	curr_node->next = new;
	new->next = NULL;
}
