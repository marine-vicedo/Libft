/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:26:46 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/11 14:26:47 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strnstr - Find the first substring in a length-limited string
big : the string to be searched
little : the string to search for
len : the maximum number of characters to search 

If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned;
otherwise a pointer to the first character of the first occurrence of little is returned.
*/

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{   
    size_t	i;
	size_t	j;

	i = 0;
	j = 0;

    if (little[i] == '\0')
        return ((char *) big);

    while (*big && (i < len))
    {
        while (*little && (big[i] == little[j]))
        {
            i++;
            j++;
        }
        if (little[j] == '\0')
            return((char *) little);
        i++;

    }
    return (NULL);
}

/*int main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar Bar";

    printf("resultat vraie fonction : %s\n", strnstr(largestring, smallstring, 7));
    printf("ma fonction : %s\n", ft_strnstr(largestring, smallstring, 7));

    return 0;
}*/