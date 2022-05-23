/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:53:19 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/18 10:20:35 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction calloc() alloue la mémoire nécessaire pour un tableau de nmemb
éléments de size octets, et renvoie un pointeur vers la mémoire allouée. Cette
zone est remplie avec des zéros. Si nmemb ou si size est nulle, calloc renvoie
soit NULL ou un unique pointeur qui pourra être passé ultérieurement à free()
avec succès. */

#include "libft.h"
//#include <stdint.h>

/*void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;

    char *s1 = (char *) s; //cast de *void to *char. 

    while (i < n)
    {
        s1[i] = '\0';
        i++;
    }
}*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	sizemax;

	sizemax = 2147483647;
    if (nmemb > (sizemax / size))
		return (NULL);
	ptr = malloc (nmemb * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

/*int main (void)
{
    //int *p2 = calloc(4, sizeof(int));

    int *p2 = ft_calloc(4, sizeof(int));
 
    if(p2) {
        for(int n=0; n<4; ++n) // print the array
            printf("p2[%d] == %d\n", n, p2[n]);
    }
    free(p2);
}*/
