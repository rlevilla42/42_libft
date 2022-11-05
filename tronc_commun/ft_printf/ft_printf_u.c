/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:54:43 by rlevilla          #+#    #+#             */
/*   Updated: 2022/11/06 00:11:01 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "liftftprintf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_itoa(unsigned int n)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * 11);
	i = ft_intlen(n);
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	str[i] = '\0';
	i--;
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_printf_u(unsigned int n)
{
	return (ft_itoa(n));
}
/*
int	main(void)
{
	unsigned int	nb = 4294967295;
	//ft_itoa(nb);
	int z = ft_itoa(nb);
	printf("%d\n", z);
}*/
