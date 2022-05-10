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

#include <string.h>
#include <stdio.h>

char    *ft_strrchr(const char *s, int c)
{
    unsigned int    i;
    i = strlen(s);

    while (s[i])
    {
        if(s[i] == c)
            return ((char *)s + i);
        i--;
    }
    return (NULL);
}

int main(void)
{
    char    s1[100] = "les chatons chat";
    int c = 'a';

    printf("%s\n", strrchr(s1, c));
    printf("%s\n", ft_strrchr(s1, c));

    return 0;
}