/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:13:18 by raphaellevillain  #+#    #+#             */
/*   Updated: 2022/10/19 00:19:27 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	k;
	char	*ptrdst;
	char	*ptrsrc;
	char	buffer[100];

	i = 0;
	k = -1;
	ptrdst = (char *)dst;
	ptrsrc = (char *)src;
	while (i < n)
	{
		buffer[i] = ptrsrc[i];
		i++;
	}
	buffer[i] = '\0';
	while (buffer[++k] != '\0')
	{
		ptrdst[k] = buffer[k];
	}
	ptrdst[k] = '\0';
	return (ptrdst);
}

/*void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptrsrc;
	char	*ptrdest;

	i = 0;
	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	if (src == NULL)
	{
		ptrdest[i] = '\0';
		return (ptrdest);
	}
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (ptrdest);
	//return (0);
}

int main(void)
{
	char src[100] = "Learningisfun";
	char src2[100] = "Learningisfun";
	char src3[100] = "Learningisfun";
	char src4[100] = "Learningisfun";
	char test[100] = "";
	char dest[100];
	char dest2[100];

	memcpy(src+8, src, 10);
	printf("What the real memcpy output: %s\n", src);

	ft_memcpy(src2+8, src2, 10);
	printf("What my ft_memcpy is outpouting: %s\n\n", src2);

	memmove(src3+8, src3, 10);
	printf("What the real memmove output: %s\n", src3);
	
	ft_memmove(src4+8, src4, 10);
	printf("What my FT_memmove output: %s\n\n", src4);

	memmove(dest, test, 10);
	printf("for the test the REAL MEMMOVE output this:%s\n", dest);

	ft_memmove(dest2, test, 10);
	printf("For the test MY FT_ MEMMOVE output this:%s\n", dest2);
}

int main(void)
{
	char src[100] = "Yo bg de la manana";
	char dest[100];
	ft_memmove(dest, src, 10);
	printf("Voila ce que output mon ptit ft_memmove de bg: %s\n", dest);
	
	char src2[100] = "Yo bg de la manana";
	char dest2[100];
	memmove(dest2, src2, 10);
	printf("Ce que MEMMOVE ORIGINAL OUTPUT: %s\n\n", dest2);
	

	char src3[100] = "Yo bg de la manana";
	char dest3[100];
	ft_memmove(dest3, src3, 18);
	printf("Voila ce que output mon ptit ft_memmove de bg: %s\n", dest3);
	
	char src4[100] = "Yo bg de la manana";
	char dest4[100];
	memmove(dest4, src4, 18);
	//quand size_t n > strlen(src) alors ca marche mieux que lorsque
	//n = strlen(src)
	printf("Ce que MEMMOVE ORIGINAL OUTPUT: %s\n", dest4);
}*/
