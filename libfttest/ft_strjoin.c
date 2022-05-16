/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:19:39 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/12 11:19:42 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc(3)) et retourne une nouvelle chaîne, résultat de la concaténation de s1 et s2.
s1: La chaîne de caractères préfixe.
s2: La chaîne de caractères suffixe.
Valeur de retour : La nouvelle chaîne de caractères. NULL si l’allocation échoue. */

#include "libft.h"

/*size_t ft_strlen(const char *s)
{
    unsigned int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}*/

static char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);

}

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *dst;
    unsigned int len;

    len = ft_strlen(s1) + ft_strlen(s2);

    if (s1 == 0 || s2 == 0)
        return (NULL);
    dst = malloc((len + 1) * sizeof(dst));
    if (dst == 0)
        return (NULL);

    ft_strcpy(dst, (char *)s1);
    ft_strcat(dst, (char *)s2);
    return (dst);
}

/*int main(void)
{
    char s1 [] = "bon";
    char s2 [] = "jour";

    printf("%s\n", ft_strjoin(s1, s2));
    return (0);
}*/