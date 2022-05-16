/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:38:19 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/12 15:38:23 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc(3)) et retourne une copie de la chaîne ’s1’, sans les caractères spécifiés dans ’set’ au début
et à la fin de la chaîne de caractères.
s1: La chaîne de caractères à trimmer.
set: Le set de référence de caractères à trimmer.
Valeur de retour : La chaîne de caractères trimmée. NULL si l’allocation échoue. */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    unsigned int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
   
}



int  main(void)
{
    char s1[] = "|||///Salut/Ca|Va|/";
    char set[] = "|/";

    .. 

    printf("%s\n", ft_strtrim(s1, set));

    return (0);
} 