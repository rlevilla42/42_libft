/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <raphaellrlevilla@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/10/19 17:20:02 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <bsd/string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	char	*ptrdst;
	char	*ptrsrc;

	j = 0;
	ptrdst = (char *)dst;
	ptrsrc = (char *)src;
	i = ft_strlen(ptrdst);
	if (dstsize <= 0)
		return (0);
	else
	{
		while (i < (dstsize - 1) && j < ft_strlen(ptrsrc))
		{
			ptrdst[i] = ptrsrc[j];
			i++;
			j++;
		}
		return (ft_strlen(ptrdst) + ft_strlen(ptrsrc));
	}
}
/*
int main(void)
{
	char buffer[32];
	char s1[] = "0123456789";
	char s2[] = "abcdef";

	strcpy(buffer, s1);
	strlcat(buffer, s2, 10);
	printf("%s\n", buffer); // devrait afficher '0123456789'
	printf("%zu\n", strlcat(buffer, s2, 10));
	ft_strlcat(buffer, s2, 10);
	printf("%s\n", buffer);
	printf("%zu\n\n", ft_strlcat(buffer, s2, 10));
	
	strcpy(buffer, s1);
	strlcat(buffer, s2, 13);
	printf("%s\n", buffer); // devrait afficher '0123456789ab'
	printf("%zu\n", strlcat(buffer, s2, 13));
	ft_strlcat(buffer, s2, 13);
	printf("%s\n", buffer);
	printf("%zu\n\n", ft_strlcat(buffer, s2, 13));

 
	strcpy(buffer, s1);
	strlcat(buffer, s2, 16);
	printf("%s\n", buffer); // devrait afficher '0123456789abcde'
	printf("%zu\n", strlcat(buffer, s2, 16));
	ft_strlcat(buffer, s2, 16);
	printf("%s\n", buffer);
	printf("%zu\n\n", ft_strlcat(buffer, s2, 16));


	strcpy(buffer, s2);
	strlcat(buffer, s1, 10);
	printf("%s\n", buffer); // devrait afficher 'abcdef012'
	printf("%zu\n", strlcat(buffer, s1, 10));
	ft_strlcat(buffer, s1, 10);
	printf("%s\n", buffer);
	printf("%zu\n\n", ft_strlcat(buffer, s1, 10));

	strcpy(buffer, s2);
	strlcat(buffer, s1, 14);
	printf("%s\n", buffer); // devrait afficher 'abcdef0123456'
	printf("%zu\n", strlcat(buffer, s1, 14));
	ft_strlcat(buffer, s1, 14);
	printf("%s\n", buffer);
	printf("%zu\n\n", ft_strlcat(buffer, s1, 14));

	char dest[32] = "0123456789";
	char src[] = "abcdef";
	ft_strlcat(dest, src, 13);
	printf("%s\n", dest);
}*/
