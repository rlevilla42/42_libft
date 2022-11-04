/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:21:29 by rlevilla          #+#    #+#             */
/*   Updated: 2022/11/04 22:54:25 by rlevilla         ###   ########.fr       */
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

int	ft_uitoa_base(unsigned long long int n)
{
	unsigned int	r;
	int				i;
	char			*str;

	r = 0;
	i = -1;
	str = (char *)malloc(sizeof(char) * 25);
	while (n > 0)
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
	// check ascii 

	printf("\tprintf output this:\t%lx\n", 4294967295);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(4294967295));
	
	printf("\tprintf output this:\t%x\n", 123456789);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(123456789));
	
	//unsigned int	n = 12345678;
	printf("\tprintf output this:\t%x\n", 98765432);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(98765432));
	
	printf("\tprintf output this:\t%x\n", 12345678);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(12345678));
	//unsigned int	n = 1234567;
	printf("\tprintf output this:\t%x\n", 17772835);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(17772835));
	
	//unsigned int	n = 123456;
	printf("\tprintf output this:\t%x\n", 666667);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(666667));
	
	//unsigned int	n = 12345;
	printf("\tprintf output this:\t%x\n", 91422);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(91422));
	
	//unsigned int	n = 1234;
	printf("\tprintf output this:\t%x\n", 9462);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(9462));
	
	//unsigned int	n = 123;
	printf("\tprintf output this:\t%x\n", 374);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(374));
	
	//unsigned int	n = 12;
	printf("\tprintf output this:\t%x\n", 12);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(12));
	
	//unsigned int	n = 1;
	printf("\tprintf output this:\t%x\n", 1);
	printf("\tft_uitoa return this:%d\n\n", ft_uitoa_base(1));
}
