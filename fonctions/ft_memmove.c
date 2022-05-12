/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:21:26 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/09 14:21:29 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memmove - Copier une zone mémoire
La fonction memmove() copie n octets depuis la zone mémoire src vers la zone mémoire dest.
Les deux zones peuvent se chevaucher : la copie se passe comme si les octets de src étaient
d'abord copiés dans une zone temporaire qui ne chevauche ni src ni dest,
et les octets sont ensuite copiés de la zone temporaire vers dest. 

La fonction memmove() renvoie un pointeur sur dest.*/



#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    i = 0;

    char    *d = (char *) dest;
    const char    *s = (char *) src;

    if (!d && !s)
        return (NULL);
    if (d > s)
    {
        while (n > 0)
        {
            d[n - 1] = s[n - 1];
            n--;
        }
    }
    
    else
    {
        while (i < n)
        {
            d[i] = s[i];
         i++;
        }
    }
    return ((void *) d);
}

void print_elements(char *array, int size)
{
  int i;
  printf ("Elements : ");
  for (i = 0; i < size; i++) {
    printf ("%c, ", array[i]);
  }
  printf (" ");
}

int main(void)
{
    char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    print_elements(c_array, sizeof(c_array));
    printf("After memmove()\n");
    ft_memmove((void *)&c_array[5], (void *)&c_array[3], 5);
    print_elements(c_array, sizeof(c_array)); 

  return (0);
}
