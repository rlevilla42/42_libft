/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:14:57 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/17 15:38:07 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/*typedef struct	s_list
{
	void	*content;
	struct	s_list	*next;
}	t_list;
*/
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new == NULL || *alst == NULL)
		return ;
	new->next = *alst;
	*alst = new;
}
