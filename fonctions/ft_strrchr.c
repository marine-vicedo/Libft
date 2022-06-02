/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:08:05 by mvicedo           #+#    #+#             */
/*   Updated: 2022/06/02 12:39:50 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Rechercher un caractère dans une chaîne.
La fonction strrchr() renvoie un pointeur sur la dernière occurrence du
caractère c dans la chaîne s ou NULL si le caractère n'a pas été trouvé. */

#include "libft.h"
#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    char *str;

    str = (char *)s; //on cast dans une variable temp

    while (*str)
        str++;
    
    if ((char)c == 0)
        return ((char *)str);

    while (str > s) //on decremente la variable temp
    {
        str--;
        if(*str == (char)c)
            return ((char *)str);
    }
    return (NULL);
}


/*int main(void)
{
    //char s[] = "tripouille";
	char s2[] = "ltripouiel";

    printf("%s\n", strrchr(s2, 't' + 256));
    printf("%s\n", ft_strrchr(s2, 't' + 256));

    return 0;
}*/