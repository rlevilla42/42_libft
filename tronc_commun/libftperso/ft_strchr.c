/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <raphaellrlevilla@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/10/19 00:54:33 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{	
	char	ch;
	int		i;
	char	*str;

	i = 0;
	ch = (char)c;
	str = (char *)s;
	while (str[i] != ch && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == '\0')
		return (NULL);
	else
		return (&str[i]);
}
/*
int main(void)
{
	char *str = "Chenzen aka freeze rael";
	int c = 121;
	printf("%s\n", strchr(str, c));
	printf("%s\n", ft_strchr(str, c));
}*/
