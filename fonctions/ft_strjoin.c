/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinevicedo <marinevicedo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:19:39 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/30 19:08:31 by marineviced      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc(3)) et retourne une nouvelle chaîne, résultat de la concaténation de s1 et s2.
s1: La chaîne de caractères préfixe.
s2: La chaîne de caractères suffixe.
Valeur de retour : La nouvelle chaîne de caractères. NULL si l’allocation échoue.
Fonction autorisee : malloc */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    unsigned int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == 0)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*int main(void)
{
    char s1 [] = "bon";
    char s2 [] = "jour";

    printf("%s\n", ft_strjoin(s1, s2));
    return (0);
}*/

/*int main(void)
{
    printf("%s\n", ft_strjoin("tripouille", "42\0"));
    return (0);
}*/