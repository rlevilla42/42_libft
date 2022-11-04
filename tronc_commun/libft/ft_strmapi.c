/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 01:11:20 by rlevilla          #+#    #+#             */
/*   Updated: 2022/11/04 02:17:56 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*s1;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s1) + 2);
	s1 = (char *)s;
	if (str == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = (*f)(i, s1[i]);
		i++;
	}
	return (str);
}
/*Function name ft_strmapi
Prototype char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
Fichiers de rendu -
Paramètres 
#1. La chaine de caractères sur laquelle itérer
#2. La fonction à appliquer à chaque caractère.
Valeur de retour La chaine de caractères résultant des applications
successives de f. Retourne NULL si l’allocation
échoue.
Fonctions externes autorisées
malloc
Description Applique la fonction ’f’ à chaque caractère de la
chaine de caractères passée en argument pour créer
une nouvelle chaine de caractères (avec malloc(3))
résultant des applications successives de ’f’.*/
