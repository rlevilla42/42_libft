/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <raphaellrlevilla@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/11/07 18:03:48 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *string, int c)
{
	int		i;
	char	*str;
	char	ch;

	i = 0;
	ch = (char)c;
	str = (char *)string;
	if (c == 0)
	{
		while (str[i] != '\0')
			i++;
		return (&str[i]);
	}
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
	printf("%s\n", ft_strchr("teste", '\0'));
	printf("%s\n", strchr("teste", '\0'));

}*/
