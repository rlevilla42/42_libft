/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <rlevilla@student.42.fr>  	    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/10/19 00:56:53 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*str1;
	char	*str2;

	i = 0;
	j = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	str = malloc(sizeof(*s2) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (str == NULL || str1 == NULL || str2 == NULL)
		return (NULL);
	ft_strcpy(str, str1);
	i = ft_strlen(str);
	while (str2[j] != '\0')
	{
		str[i] = str2[j];
		i++;
		j++;
	}
	return (str);
}
/*
int main(void)
{
	char	*s1 = "Bonjour abby";
	char	*s2 = " TU ES UN HOMME";

	printf("%s\n", ft_strjoin(s1, s2));
}
*/
