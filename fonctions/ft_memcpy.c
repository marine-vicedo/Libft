/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:05:05 by mvicedo           #+#    #+#             */
/*   Updated: 2022/06/01 17:41:47 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy - Copier une zone mémoire  
memcpy() copie n octets depuis la zone mémoire src vers la zone mémoire dest.
Les 2 zones ne doivent pas se chevaucher. Si c'est le cas, utilisez memmove(3).
La fonction memcpy() renvoie un pointeur sur dest. */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

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

int main(void)
{
  char dest[] = "AAAAA";
  ft_memcpy(dest, "coucou", 10); // SRC > dest => SRC est copie mais stack smashing : erreur de depassement de buffer
  //memcpy(dest, "coucou", 10);
  printf("%s\n", dest);

  char str[] = "This is an example";
  ft_memcpy(str + 7, str, 11); // cas de chevauchement = comportement aleatoire, la sortie va etre mal copiee. sortie : This isThis isThis
  printf("%s\n", dest);

  return (0);
}
