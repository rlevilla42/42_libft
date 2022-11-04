/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:54:43 by rlevilla          #+#    #+#             */
/*   Updated: 2022/11/02 00:24:13 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "liftftprintf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/*
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
*/
int	ft_intlen(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = n * (-1);
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

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

	str = (char *)malloc(sizeof(char) * 12);
	i = ft_intlen(n);
	str[i] = '\0';
	i--;
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_printf_int(int n)
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
