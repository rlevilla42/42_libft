/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <raphaellrlevilla@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/10/19 00:47:26 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ptrs1;
	char	*ptrs2;

	i = 0;
	ptrs1 = (char *)s1;
	ptrs2 = (char *)s2;
	while (ptrs1[i] == ptrs2[i] && i < n)
		i++;
	return (ptrs1[i] - ptrs2[i]);
}
/*
int main(void)
{
	char *str1 = "Yo petit con";
	char *str2 = "Yo petit con";
	printf("memcmp output this: %i\n", memcmp(str1, str2, 20));
	printf("ft_memcmp output this: %i\n\n", ft_memcmp(str1, str2, 20));
	
	char *str3 = "Yo petit con";
	char *str4 = "Yo petit con0";
	printf("memcmp output this: %i\n", memcmp(str3, str4, 20));
	printf("ft_memcmp output this: %i\n\n", ft_memcmp(str3, str4, 20));
	
	char *str5 = "Yo petit conyjsncjwnjw178920--=1=";
	char *str6 = "Yo petit con";
	printf("memcmp output this: %i\n", memcmp(str5, str6, 20));
	printf("ft_memcmp output this: %i\n\n", ft_memcmp(str5, str6, 20));

	char *str7 = "";
	char *str8 = " ";
	printf("memcmp output this: %i\n", memcmp(str7, str8, 20));
	printf("ft_memcmp output this: %i\n\n", ft_memcmp(str7, str8, 20));

	char *str9 = "Yo petit con";
	char *str91 = "";
	printf("memcmp output this: %i\n", memcmp(str9, str91, 20));
	printf("ft_memcmp output this: %i\n", ft_memcmp(str9, str91, 20));
}*/
