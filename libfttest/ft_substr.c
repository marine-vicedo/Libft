/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:20:42 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/12 10:20:43 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc(3)) et retourne une chaîne de caractères issue de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index ’start’ et a pour taille maximale ’len'.
s: La chaîne de laquelle extraire la nouvelle chaîne.
start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
len: La taille maximale de la nouvelle chaîne 
Valeur de retour : La nouvelle chaîne de caractères. NULL si l’allocation échoue.*/

//#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_substr(char const    *s, unsigned int    start, size_t    len)
	{
	    size_t    i;
	    size_t    j;
	    char    *res;
	
	    i = 0;
	    j = 0;
	    if (!s)
	        return (NULL);
	    res = malloc(sizeof(char) * (len + 1));
	    if (!res)
	        return (NULL);
	    while (s[i])
	    {
	        if (i >= start && j < len)
	        {
	            res[j] = s[i];
	            j++;
	        }
	        i++;
	    }
	    res[j] = '\0';
	    return (res);
	}

int main(void)
{
    char s1[] = "abcdefghi";

    printf("%s\n", ft_substr(s1, 2, 4));

    return (0);
}