/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:13:18 by raphaellevillain  #+#    #+#             */
/*   Updated: 2022/10/19 00:48:37 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptrs;
	char			c1;

	i = 0;
	ptrs = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (ptrs[i] != c1 && i < n)
	{
		i++;
	}
	if (i < n)
	{
		return (&ptrs[i]);
	}
	return (NULL);
}
/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			printf("%zu", i++);
			return (&ptr[i]);
		}
		printf("%zu", i);
		i++;
	}
	return (NULL);
}
*/
/*
int main(void)
{
	char *str = "Fuck les pedo s/o Chenzen aka freeze rael";
	char *ptrmemchr = memchr(str, 'k', 4);
	printf("memchr output this: %s\n", ptrmemchr);

	char *str1 = "Fuck les pedo s/o Chenzen aka freeze rael";
	char *ptrft_memchr = ft_memchr(str1, 'k', 4);
	printf("ft_memchr output this: %s\n\n", ptrft_memchr);


	char *str3 = "Fuck les pedo s/o Chenzen aka freeze rael";
	char *ptrmemchr2 = memchr(str3, 'k', 3);
	printf("memchr output this: %s\n", ptrmemchr2);

	char *str4 = "Fuck les pedo s/o Chenzen aka freeze rael";
	char *ptrft_memchr3 = ft_memchr(str4, 'k', 3);
	printf("ft_memchr output this: %s\n", ptrft_memchr3);
}*/
