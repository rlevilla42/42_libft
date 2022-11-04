/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <rlevilla@student.42.fr>  	    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/10/19 17:18:54 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	b;
	char	*buffer;

	i = -1;
	j = -1;
	b = -1;
	buffer = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (buffer == NULL)
		return (NULL);
	while (s1[++i] != '\0' && set[++j] != '\0')
	{
		if (s1[i] == set[0] || s1[i] == set[ft_strlen(set) - 1])
			j = -1;
		else
		{
			buffer[++b] = s1[i];
			j = -1;
		}
	}
	buffer[++b] = '\0';
	return (buffer);
}
/*
int main(void)
{
	char *s1 = "Salut nigo";
	char	*set = "uto";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
*/
