/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:38:19 by mvicedo           #+#    #+#             */
/*   Updated: 2022/06/02 12:39:38 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc(3)) et retourne une copie de la chaîne ’s1’, sans les
caractères spécifiés dans ’set’ au début et à la fin de la chaîne de caractères.
s1: La chaîne de caractères à trimmer.
set: Le set de référence de caractères à trimmer.
Valeur de retour : La chaîne de caractères trimmée. NULL si l’allocation échoue.
Fonction autorisee : malloc */

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
    size_t start;
    size_t end;
    size_t i;
    char *str;
    
    i = 0;
    start = 0;
    end = ft_strlen((char *)(s1)); 
    if (s1 == 0 || set == 0)
        return(NULL);
    while (s1[start] && ft_compare(s1[start], set) == 1) //on passe les cacteres a trimmer au debut avec start et a la fin avec end
        start++;
    while (end > start && ft_compare(s1[end - 1], set) == 1) // end > start car start doit parcourir toute la chaine si pas de trim dans la chaine || s1[end - 1] <=> il s'agit d'un indice donc - 1 || end = len de la src
        end--;
    str = (char *)malloc(sizeof(char) * ((end - start) + 1));
    if (str == 0)
        return(NULL);
    while(start < end)
    {
        str[i] = s1[start];
        start++;
        i++;
    }
    str[i] = '\0';
    return (str);
}


/*int		main(void)
{
	printf("%s", ft_strtrim("   xxx   xxx", " x"));
	return (0);
}*/

