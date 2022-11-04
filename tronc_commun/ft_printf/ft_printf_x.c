/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:21:29 by rlevilla          #+#    #+#             */
/*   Updated: 2022/11/02 00:49:16 by rlevilla         ###   ########.fr       */
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
		return ('a');
	else if (r == 11)
		return ('b');
	else if (r == 12)
		return ('c');
	else if (r == 13)
		return ('d');
	else if (r == 14)
		return ('e');
	else if (r == 15)
		return ('f');
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

int	ft_uitoa_base(unsigned int n)
{
	unsigned int	r;
	int				i;
	char			*str;

	r = 0;
	i = -1;
	str = (char *)malloc(sizeof(char) * 25);
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

int main(void)
{
	//unsigned int	n = 4294967295;
	unsigned int	n = 4294967294;
	int	z = ft_uitoa_base(n);

	printf("printf output this:%x\n", n);
	printf("ft_uitoa output this:\n");
	//ft_uitoa_base(n);
	printf("%d\n", z);
}
