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

/*static int trim_charset(char const set)
{
    if (c == ' ' || c >= 9 && c <= 13)
        return (1);
}*/

char *ft_strtrim(char const *s1, char const *set)
{
   unsigned int i;

   i = 0;
   while (set[i])
   {
       i++;
   }
   



int  main(void)
{
    char s1[] = "|||///Salut/Ca|Va|/";
    char set[] = "|/";

    .. 

    printf("%s\n", ft_strtrim(s1, set));

    return (0);
} 