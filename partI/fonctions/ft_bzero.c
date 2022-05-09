/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:41:24 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/09 11:41:28 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* bzero - Écrire des octets de valeur zéro dans un bloc d'octets   
La fonction bzero() met à 0 (octets contenant « \0 ») les n premiers octets du bloc pointé par s.
Ne renvoie aucune valeur.
*/

#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;

    char *s1 = (char *) s; //cast de *void to *char. 

    while (i < n)
    {
        s1[i] = '\0';
        i++;
    }
}

int main(void)
{
    char str[50] = "Il est dix-sept heures";
    printf("Before bzero():%s\n", str);

    bzero(str + 8, 3);
    printf("After bzero():  %s\n", str);

    ft_bzero(str + 8, 3);
    printf("After ft_bzero(): %s\n", str);
}