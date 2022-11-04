/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <raphaellrlevilla@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/11/03 17:44:43 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t n_elements, size_t size_datatype)
{
	char	*array;
	size_t	i;

	i = 0;
	array = malloc(size_datatype * (n_elements + 1));
	if (array != malloc(size_datatype * (n_elements + 1)))
	{
		return (NULL);
	}
	ft_bzero(array, n_elements * size_datatype);
	return (array);
}
