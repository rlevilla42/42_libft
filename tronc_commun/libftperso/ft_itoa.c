/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:48:46 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/17 15:33:24 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		k;
	char	temp;

	i = 0;
	k = 0;
	j = ft_strlen(str) - 1;
	while (k < (ft_strlen(str) / 2))
	{
		if (str[i] == '-')
		{
			i++;
		}
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		k++;
		j--;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char *) * 13 + 1);
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		str[i] = '-';
		n = n * (-1);
		i++;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}
/*
int main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}
*/
