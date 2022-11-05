/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_majx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:48:20 by rlevilla          #+#    #+#             */
/*   Updated: 2022/11/05 23:48:07 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_revstr(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int	ft_itoa_base(unsigned int n, char *base)
{
	int				i;
	char			*str;

	i = -1;
	str = (char *)malloc(sizeof(char) * 25);
	while (n > 0)
	{
		str[++i] = base[n % 16];
		n /= 16;
		if (n < 16)
		{
			str[++i] = base[n];
			n = 0;
		}
	}
	str[++i] = '\0';
	ft_revstr(str);
	return (ft_strlen(str));
}

int	ft_printf_majx(unsigned int n, char *base)
{
	return (ft_itoa_base(n, base));
}
/*
int main(void)
{
	int	n = 9238;

	printf("printf output this:%X\n", n);
	//printf("ft_uitoa output this:\n");
	//ft_uitoa(n);
	printf("ft_uitoa has %d character\n", ft_uitoa(n));
}*/
