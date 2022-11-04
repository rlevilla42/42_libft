/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:21:45 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/14 16:17:21 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "libftprintf.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_putnbr(int nb)
{
	char	w;

	w = nb + 48;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1));
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10); 
	}
	else if (nb > 0 && nb < 10)
		write(1, &w, 1);
	return (0);
}

int main (void)
{
	int nb = -6670;
	ft_putnbr(nb);
}

/*char	*ft_printfchar(const char *format, char *buffer, va_list args)
{
	int	i;
	char	c;

	i = 0;
	c = (char) va_arg(args, format);
	while (
}*/
