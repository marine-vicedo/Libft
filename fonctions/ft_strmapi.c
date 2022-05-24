/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:43:44 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/24 14:55:41 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applique la fonction ’f’ à chaque caractère de la chaîne de caractères
passée en argument pour créer une nouvelle chaîne de caractères
(avec malloc(3)) résultant des applications successives de ’f’.
s: La chaîne de caractères sur laquelle itérer.
f: La fonction à appliquer à chaque caractère.
La chaîne de caractères résultant des applications successives de ’f’.
Retourne NULL si l’allocation échoue.*/

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*dest;

	i = 0;
	len = ft_strlen((char *)s);
	dest = (char *)malloc ((len + 1) * sizeof(char));
	if (dest == 0)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
     int  i;
     char      *str;

     i = 0;
     str = ft_strdup(s);
     if (!str)
          return(NULL);
     while (str[i])
     {
          str[i] = f(i, str[i]);
          i++;
     }
     str[i] = '\0';
     return (str);
}

/*char addOne(unsigned int i, char c)
{
     return (i + c);
}

int main(void)
{
	printf("%s", ft_strmapi("1234", addOne));
	return (0);
}*/