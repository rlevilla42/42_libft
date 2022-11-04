/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <raphaellrlevilla@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/11/04 02:37:58 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *string, int c)
{
	int		i;
	int		j;
	char	*str;
	char	ch;

	i = 0;
	j = 0;
	str = (char *)string;
	ch = (char)c;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			j = i;
		}
		i++;
	}
	if (j != 0)
	{
		return (&str[j]);
	}
	else
		return (NULL);
}
/*
int main(void)
{
	char	*str = "Salut petit fada chenzen aka freeze rael";
	int	c = 116;
	printf("%s\n", strrchr(str, c));
	printf("%s\n", ft_strrchr(str, c));
}*/
