/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:05:05 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/09 12:05:12 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy - Copier une zone mémoire  
La fonction memcpy() copie n octets depuis la zone mémoire src vers la zone mémoire dest.
Les deux zones ne doivent pas se chevaucher. Si c'est le cas, utilisez plutôt memmove(3).
La fonction memcpy() renvoie un pointeur sur dest. */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    i = 0;

    char    *d = (char *) dest;
    const char    *s = (char *) src;

    while ((i < n) & (s[i]))
    {
        d[i] = s[i];
        i++;
    }
    return ((void *) d);
}

int main(void)
{
    char    dest[100] = "http://www.tutorialspoint.com";
    char    src[100] = "Heloooo!!";

    printf("Before memcpy dest = %s\n", dest);
    memcpy(dest, src, 8);
    printf("After memcpy dest = %s\n", dest);
    ft_memcpy(dest, src, 8);
    printf("After memcpy dest = %s\n", dest);

    return 0;

}