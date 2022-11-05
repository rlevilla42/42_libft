/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:31:54 by rlevilla          #+#    #+#             */
/*   Updated: 2022/11/05 23:56:19 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libftprintf.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

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

int	ft_itoa_base(unsigned long long int n, char *base)
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

int	ft_printf_p(unsigned long long int n, char *base)
{
	ft_putchar("0");
	ft_putchar("X");
	return (2 + (ft_itoa_base(n, base));
}

int main(void)
{
	//unsigned int	n = 4294967295;
	unsigned long long n = 18446744073709551615;
	//int	z = ft_uitoa_base(n);

	printf("printf output this:%llx\n", n);
	//printf("ft_uitoa output this:\n");
	//ft_uitoa_base(n);
	//printf("%d\n", z);
}
