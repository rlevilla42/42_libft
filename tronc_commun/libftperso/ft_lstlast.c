/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:48:30 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/19 17:41:35 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*begin;

	begin = lst;
	if (lst == NULL)
		return (0);
	while (begin->next != NULL)
	{
		begin = begin->next;
	}
	return (begin);
}
