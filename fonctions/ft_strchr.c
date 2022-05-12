/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:32:04 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/10 15:32:07 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Rechercher un caractère dans une chaîne.
La fonction strchr() renvoie un pointeur sur la première occurrence du caractère c dans la chaîne s. 
ou NULL si le caractère n'a pas été trouvé. */

#include <string.h>
#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    
    i = 0;

    while (s[i])
    {
        if(s[i] == c)
            return ((char *)s + i);
        i++;
    }
    return (0);
}

int main(void)
{
    char    s1[100] = "les chatons";
    int c = 'c';

    printf("%s\n", strchr(s1, c));
    printf("%s\n", ft_strchr(s1, c));

    return 0;
}