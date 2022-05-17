/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:08:05 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/10 16:08:09 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Rechercher un caractère dans une chaîne.
La fonction strrchr() renvoie un pointeur sur la dernière occurrence du caractère c dans la chaîne s 
ou NULL si le caractère n'a pas été trouvé. */

#include "libft.h"
#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    char *str;

    str = (char *)s;

    while (*str)
        str++;
    
    if ((char)c == 0)
        return ((char *)str);

    while (str > s)
    {
        str--;
        if(*str == (char)c)
            return ((char *)str);
    }
    return (0);
}


/*int main(void)
{
<<<<<<< HEAD
    //char s[] = "tripouille";
	char s2[] = "ltripouiel";
=======
    char    s1[20] = "les chatons chat";
    int c = 0;
>>>>>>> fb4d6feae3c0125bcff3e5b634970b040268cc0b

    printf("%s\n", strrchr(s2, 't' + 256));
    printf("%s\n", ft_strrchr(s2, 't' + 256));

    return 0;
}*/