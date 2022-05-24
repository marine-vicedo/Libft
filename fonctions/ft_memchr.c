/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:55:43 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/18 10:26:25 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Rechercher un caractère dans une zone mémoire.
*s : chaine de caractère à examiner
c : caractère à trouver / case memoire de l'octet
n : nombre d'octets dans la chaine *s à partir de *s[o]

La fonction memchr() examine les n premiers octets de la zone mémoire pointée
par s à la recherche du caractère c. Le premier octet correspondant à c
(interprété comme un unsigned char) arrête l'opération.
Renvoie un pointeur (une adresse) sur l'octet correspondant, ou NULL si le
caractère n'est pas présent dans la zone de mémoire concernée. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*s1;

	s1 = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

/*int main(void)
{

    char s[] = {0, 1, 2 ,3 ,4 ,5};

    printf("%p\n", ft_memchr(s, 2, 3));

    return (0);
}*/
