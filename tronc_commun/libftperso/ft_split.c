/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:44:02 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/22 17:53:09 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
size_t	ft_countstr(char const *s, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
		{
			k++;
		}
		i++;
	}
	return (k);
}

char	*ft_malloc_str_cpy(char const *s, char c)
{
	size_t	i;
	size_t	k;
	char	*new;

	i = 0;
	k = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		k++;
		i++;
	}
	i = i - k;
	new = (char *)malloc(sizeof(char) * (k + 1));
	if (new == NULL)
		return (NULL);
	while (s[i] != '\0' && s[i] != c)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**strs;

	i = 0;
	j = 0;
	strs = (char **)malloc(sizeof(char *) * (ft_countstr(s, c) + 1));
	if (strs == NULL || s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
		{
			s++;
		}
		if (*s != '\0' && *s != c)
		{
			strs[j] = ft_malloc_str_cpy(s, c);
			j++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	strs[j] = NULL;
	return (strs);
}
/*
int main(void)
{
	char const *s = "..Macron..e.st.un.ped.o.sataniste";
	char	c = '.';
	size_t	k;
	size_t	i = 0;
	char	**ptrs;

	ptrs = ft_split(s, c);
	k = ft_countstr(s, c);
	while (i < (k + 1))
	{
		printf("%s\n", ptrs[i]);
		i++;
	}
}*/
