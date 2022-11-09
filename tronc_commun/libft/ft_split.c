/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:59:53 by rlevilla          #+#    #+#             */
/*   Updated: 2022/11/09 01:47:10 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_countc(char const *str, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && str[i + 1] == c)
		{
			k++;
		}
		i++;
	}
	return (k);
}

size_t	ft_slen(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_strcpy_malloc(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_slen(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ptrptrs;
	size_t	j;

	j = -1;
	ptrptrs = (char **)malloc(sizeof(char *) * (ft_countc(s, c) + 1));	
	if (!ptrptrs || !s)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			++s;
		if (*s != c && *s != '\0')
		{
			ptrptrs[++j] = ft_strcpy_malloc(s, c);
			while (*s != c && *s != '\0')
				++s;
		}
	}
	ptrptrs[++j] = NULL;
	return (ptrptrs);
}

int main(void)
{
	// test FINAL

	char	str[] = "..Macron..e.st.un.pedo.sataniste..";
	char	str2[] = "hello!";
	char	c = '.';
	char	c1 = ' ';
	size_t	i = 0;
	size_t	j = 0;
	char	**ptrptrs;
	char	**ptrptrs2;

	ptrptrs = ft_split(str, c);
	printf("Voici ce que output ft_split normal:\n");
	while (ptrptrs[i] != 0)
	{
		printf("%s\n", ptrptrs[i]);

		i++;
	}
	printf("%s\n\n", ptrptrs[i]);
	printf("Voici ce que output ft_split normal:\n\n");
	ptrptrs2 = ft_split(str2, c1);
	while (ptrptrs2[j] != 0)
	{
		printf("%s\n", ptrptrs2[j]);

		j++;
	}
	printf("%s\n", ptrptrs2[j]);
}

/*
int main(void)
{
	// test ft_countc;

	char	str[] = "hello!";
	char	str2[] = "..Macron.e.st.pdo.sataniste..";
	char	str3[] = "..Macron.e.st.pdo.sataniste.";
	char	c = ' ';
	char	c1 = '.';
	size_t	k = ft_countc(str, c);
	size_t	k1 = ft_countc(str2, c1);
	size_t	k2 = ft_countc(str3, c1);
	printf("%zu\n", k);
	printf("%zu\n", k1);
	printf("%zu\n", k2);
}
*/
/*
int main(void)
{
    // test FINAL

    char    str[] = "..Macron..e.st.un.pedo.sataniste..";
    char    c = '.';
    size_t    i = 0;
    char    **ptrptrs;

    ptrptrs = ft_split(str, c);
    while (ptrptrs[i] != 0)
    {
        printf("%s\n", ptrptrs[i]);
        free(ptrptrs[i]);
        i++;
    }
    free(ptrptrs);
}
*/
/*
int main(void)
{
	// test ft_slen len pour chaque str

	char	str[] = "hello!";
	char	*s = str;
	char	c = ' ';
	while (*s != '\0')
	{
		if (*s != c)
		{
			printf("%zu\n", ft_slen(s, c));
			while (*s != c && *s != '\0')
			{
				++s;
			}
		}
		else
		{
			++s;
		}
	}
}*/
