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

/* Alloue (avec malloc(3)) et retourne une copie de la chaîne ’s1’, sans les
caractères spécifiés dans ’set’ au début et à la fin de la chaîne de caractères.
s1: La chaîne de caractères à trimmer.
set: Le set de référence de caractères à trimmer.
Valeur de retour : La chaîne de caractères trimmée. NULL si l’allocation échoue. */

#include "libft.h"
#include <string.h>

size_t ft_strlen(const char *s)
{
    unsigned int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

static int	ft_compare(const char c, const char *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int i;
    char *str;
    
    i = 0;
    start = 0;
    end = ft_strlen((char *)(s1)) - 1;
    if (s1 == 0)
        return(NULL);
    while (ft_compare(s1[start], set) == 1)
        start++;
    while (ft_compare(s1[end], set) == 1)
        end--;
    str = (char *)malloc((end - start) * sizeof(char) + 1);
    if (str == 0)
        return(NULL);
    while(start <= end)
    {
        str[i] = s1[start];
        start++;
        i++;
    }
    str[i] = '\0';
    return (str);
}

int  main(void)
{
    char s1[] = "|||///Salut/Ca|Va|/";
    char set[] = "|/";

    printf("%s\n", ft_strtrim(s1, set));

    return (0);
}