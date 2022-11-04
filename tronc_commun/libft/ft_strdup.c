/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <raphaellrlevilla@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/11/04 02:00:51 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*buffer;
	char	*str;

	i = 0;
	str = (char *)s1;
	buffer = malloc(sizeof(*str) * (ft_strlen(str) + 1));
	if (buffer == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	return (str);
}
/*
int main(void)
{
	char	*str = "putain jarrive meme pas a savoir si ca marche c'te fonction";
	printf("%s\n", strdup(str));
	printf("%s\n", ft_strdup(str));
}*/
