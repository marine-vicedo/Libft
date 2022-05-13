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

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *dst;
    unsigned int    i;

    i = 0;
    dst = malloc((len + 1) * sizeof(dst));
    if (size != '\0' && size >= dst_len)
        dst[i] = '\0';

    if (size < dst_len)
        return (src_len + size);
    else
        return (dst_len + src_len);
    if (dst == 0)
        return (NULL);
    while (*s && (i < len))
    {
        dst[i] = s[start];
        start++;
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

/*int main(void)
{
    char s1[] = "abcdefghi";

    printf("%s\n", ft_substr(s1, 2, 4));

    return (0);
}*/