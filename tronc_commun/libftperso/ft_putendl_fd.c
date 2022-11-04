/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:44:26 by rlevilla          #+#    #+#             */
/*   Updated: 2022/10/17 16:10:15 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*size_t	ft_strlen(char *s)
{
	size_t	i;
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/
void	ft_putendl_fd(char *s, int fd)
{
	char	c;
	size_t	i;

	i = 0;
	c = '\n';
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
	}
	write(fd, &c, 1);
}
