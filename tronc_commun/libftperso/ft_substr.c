/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaell <rlevilla@student.42.fr>  	    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:13:18 by raphaell          #+#    #+#             */
/*   Updated: 2022/10/19 17:18:29 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	start1;
	char	*dest;
	char	*s2;

	i = 0;
	start1 = (size_t)start;
	s2 = (char *)s;
	dest = malloc(sizeof(*s) * (len + 1));
	if (dest == NULL)
		return (NULL);
	else if (start1 > len || (start1 + 1) > len || start1 > ft_strlen(s2))
		return (NULL);
	while (s[start1] != '\0' && (i < len))
	{
		dest[i] = s[start1];
		i++;
		start1++;
	}
	return (dest);
}
/*
int main(void)
{	const char	*s1 = "Bonjour chenzen aka freeze rael";
	unsigned int	start = 3;
	size_t	len =  12;

	printf("%s\n", ft_substr(s1, start, len));
	free(ft_substr(s1, start, len));
}
*/
/*#1. La chaine de laquelle extraire la nouvelle
chaine
#2. L’index de début de la nouvelle chaine dans la
chaine ’s’.
#3. La taille maximale de la nouvelle chaine.
Valeur de retour The nouvelle chaine de caractere. NULL si
l’allocation échoue.
Fonctions externes autorisées
malloc
Description Alloue (avec malloc(3)) et retourne une chaine de
caractères issue de la chaine ’s’.
Cette nouvelle chaine commence à l’index ’start’ et
a pour taille maximale ’len’
*/
