/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:32:04 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/25 16:03:00 by mvicedo          ###   ########.fr       */
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
    while (s[i]) // different de null-byte
    {
        if(s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if(s[i] == (char)c) // if s[i] == '\0'
        return ((char *)&s[i]); 
	
    return (0);
}

int main(void)
{
    const char    *s1 = "ripouille";

    //printf("%s\n", strchr(s1, 't'));
    printf("%s\n", ft_strchr(s1, 'a'));

    return 0;
}