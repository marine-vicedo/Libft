/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinevicedo <marinevicedo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:20:42 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/30 19:08:24 by marineviced      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc(3)) et retourne une chaîne de caractères issue de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index ’start’ et a pour taille maximale ’len'.
s: La chaîne de laquelle extraire la nouvelle chaîne.
start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
len: La taille maximale de la nouvelle chaîne 
Valeur de retour : La nouvelle chaîne de caractères. NULL si l’allocation échoue.
Fonction autorisee : malloc */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
	{
	    size_t    i;
	    size_t    j;
	    size_t	slen;
	    char    *res;
	    
	    i = 0;
	    j = 0;
	    slen = ft_strlen(s);
	    
	    if (s == 0)
	    	return (NULL);
	    if (start > slen)
		len = 0;
	    else if (len + start > slen)
		len = slen - start;
	    res = (char*)malloc(sizeof(char) * (len + 1));
	    if (res == 0)
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

/*int main(void)
{
    char s1[] = "1";

    printf("%s\n", ft_substr(s1, 42, 42000000));
    return (0);
}*/