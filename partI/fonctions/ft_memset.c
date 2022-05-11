/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:19:15 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/06 16:19:21 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction memset() remplit les n premiers octets de la zone mémoire pointée par s avec l'octet c. 
La fonction memset() renvoie un pointeur sur la zone mémoire s.  */
// s => starting address of memory to be filled
// c => value to be filed
// n => number of bytes to be filled starting

/*Cast : I wanted the pointer to be a treated as a character pointer,
we put the type inside parentheses, as in (char *)
and place it immediately before the item we want to cast*/

#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    //unsigned int i;
    i = 0;

    char *s1;
    s1 = (char *) s; //cast de *void to *char

    while (i < n)
    {
        s1[i] = c;
        i++;
    }
    return ((void *)s1);
}

int main(void)
{
    char str[50] = "Il est dix-sept heures";
    printf("Before memset():%s\n", str);

    memset(str + 10, '.', 2*sizeof(char));
    printf("After memset():  %s\n", str);

    ft_memset(str + 10, '.', 2*sizeof(char));
    printf("After ft_memset():  %s\n", str);
    return 0;
}