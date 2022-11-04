/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <raphaellrlevilla@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/11/04 02:23:29 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	nb;

	i = 0;
	nb = (int)n;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < nb - 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}
/*
int main(void)
{
	char	*str1 = "Yo petit malin";
	char	*str2 = "Yo petit filou";
	char	*str3 = "Yo petit malin qui me zehef";
	char	*str4 = "";

	//size_t	n1bis = 14;
	//size_t	n1 = 10;
	//size_t	n2 = 9;
	size_t	n3 = 27;
	size_t	n4 = 3;
	printf("%d\n", strncmp(str1, str2, 10));
	printf("%d\n\n", ft_strncmp(str1, str2, 10));
	printf("%d\n", strncmp(str1, str3, n3));
	printf("%d\n\n", ft_strncmp(str1, str3, n3));
	printf("%d\n", strncmp(str1, str4, n4));
	printf("%d\n", ft_strncmp(str1, str4, n4));
}*/
