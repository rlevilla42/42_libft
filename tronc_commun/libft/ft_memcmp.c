/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <raphaellrlevilla@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/11/03 19:24:31 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*ptrstr1;
	char	*ptrstr2;

	i = 0;
	if (n == 0)
		return (0);
	ptrstr1 = (char *)str1;
	ptrstr2 = (char *)str2;
	while (ptrstr1[i] == ptrstr2[i] && i < n)
		i++;
	return (ptrstr1[i] - ptrstr2[i]);
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
	printf("ft_memcmp output this: %i\n\n", ft_memcmp(str9, str91, 20));

	char *str10 = "Yo petit con";
	char *str11 = "Yo p9tit con";
	printf("memcmp output this: %i\n", memcmp(str10, str11, 5));
	printf("ft_memcmp output this: %i\n", ft_memcmp(str10, str11, 5));

}*/
