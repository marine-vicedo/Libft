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

#include "libft.h"
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned   char *str1;
    unsigned   char *str2; 
    
    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;

    i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		
        else
            i++;
	}
	return (0);
}

/*int main (void)
{
    printf("%d\n", memcmp("ananas", "bzc", 3));
    printf("%d\n", ft_memcmp("ananas", "bzc", 3));

    return (0);
}*/

/*int main(void)
{

        char s[] = {-128, 0, 127, 0};
        //char sCpy[] = {-128, 0, 127, 0};
        char s2[] = {0, 0, 127, 0};
        //char s3[] = {0, 0, 42, 0};

        printf("%d\n", memcmp(s, s2, 1));
        printf("%d\n", ft_memcmp(s, s2, 1));

}*/