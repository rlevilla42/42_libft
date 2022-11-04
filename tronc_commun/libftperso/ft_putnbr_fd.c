/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:54:28 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/17 16:10:45 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		nbr;

	c = '-';
	nbr = n + 48;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	if (n < 0 && n > -2147483648)
	{
		write(fd, &c, 1);
		ft_putnbr_fd(n * (-1), fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n <= 9 && n >= 0)
	{
		write(fd, &nbr, 1);
	}
}
