/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:55:43 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/11 10:55:45 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Rechercher un caractère dans une zone mémoire.
La fonction memchr() examine les n premiers octets de la zone mémoire pointée par s à la recherche du caractère c.
Le premier octet correspondant à c (interprété comme un unsigned char) arrête l'opération.
Renvoie un pointeur sur l'octet correspondant, ou NULL si le caractère n'est pas présent dans la zone de mémoire concernée. */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned int    i;
    const char *s1; 
    
    s1 = (const char *) s;
    
    i = 0;

    while (i < n)
    {
        if(s1[i] == c)
            return ((char *)s1 + i);
        i++;
    }
    return (0);
}

/*int main(void)
{

    char data[] = "les chats";
    const unsigned int size = 10;

    // On recherche une valeur inexistante :
    //void * found = memchr( data, 57, size );
    //printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

    void * found = ft_memchr( data, 'b', size );
    printf( "b is %s\n", ( found != NULL ? "found" : "not found" ) );


    // On recherche une valeur existante :
    found = memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );

    return (0);
}*/