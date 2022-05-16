/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:05:05 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/13 17:00:17 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy - Copier une zone mémoire  
memcpy() copie n octets depuis la zone mémoire src vers la zone mémoire dest.
Les 2 zones ne doivent pas se chevaucher. Si c'est le cas, utilisez memmove(3).
La fonction memcpy() renvoie un pointeur sur dest. */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	const char	*s;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *) d);
}

/* void print_elements(char *array, int size)
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
  printf("After memcpy()\n");
  ft_memcpy((void *)&c_array[5], (void *)&c_array[3], 5);
  print_elements(c_array, sizeof(c_array));

  return (0);
}*/
