/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:59:33 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/11 11:59:40 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Comparaison de zones memoire
La fonction memcmp() compare les n premiers octets des zones mémoire s1 et s2.
Elle renvoie un entier inférieur, égal, ou supérieur à zéro, si s1 est respectivement inférieure, égale ou supérieur à s2. */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    const   char *str1;
    const   char *str2; 
    
    str1 = (const char *) s1;
    str2 = (const char *) s2;

    i = 0;
	while ((str1[i] || str2[i]) && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int main (void)
{
    printf("%d\n", memcmp("ananas", "bzc", 3));
    printf("%d\n", ft_memcmp("ananas", "bzc", 3));

    return (0);
}