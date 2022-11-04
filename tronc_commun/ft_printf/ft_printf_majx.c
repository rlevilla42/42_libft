/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_majx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:48:20 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/28 00:55:51 by rlevilla         ###   ########.fr       */
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

char	ft_dec_to_hex(unsigned int r)
{
	if (r == 10)
		return ('A');
	else if (r == 11)
		return ('B');
	else if (r == 12)
		return ('C');
	else if (r == 13)
		return ('D');
	else if (r == 14)
		return ('E');
	else if (r == 15)
		return ('F');
	return (0);
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

int	ft_uitoa(unsigned int n)
{
	unsigned int	r;
	int				i;
	char			*str;

	r = 0;
	i = -1;
	str = (char *)malloc(sizeof(char) * 14);
	while (n >= 16)
	{
		r = n % 16;
		if (r < 10 && r >= 0)
			str[++i] = r + 48;
		else
			str[++i] = ft_dec_to_hex(r);
		n = n / 16;
		if (n < 16)
		{
			str[++i] = n + 48;
			n = 0;
		}
	}
	str[++i] = '\0';
	ft_revstr(str);
	return (ft_strlen(str));
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
