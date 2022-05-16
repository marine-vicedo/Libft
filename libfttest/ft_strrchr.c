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

char    *ft_strrchr(const char *s, int c)
{
    const char *str;

    str = s;

    while (*str)
        str++;
    
    if (c == 0)
        return ((char *)str);

    while (str > s)
    {
        str--;
        if(*str == c)
            return ((char *)str);
    }
    return (0);
}


/*int main(void)
{
    char    s1[20] = "les chatons chat";
    int c = 'c';

    printf("%s\n", strrchr(s1, c));
    printf("%s\n", ft_strrchr(s1, c));

    return 0;
}*/