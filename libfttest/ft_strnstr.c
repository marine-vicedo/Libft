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
#include <bsd/string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{   
    size_t	i;
	size_t	j;
    //char *res;

	i = 0;
	j = 0;

    if (*big == 0)
        return (NULL);
    if (*little == '\0')
        return ((char *) big);

    while (*big && (strlen(little) < len))
    {
        while (*little && (big[i] == little[j]))
        {
            i++;
            j++;
        }
        i++;
    }
    if (little[j] == '\0')
            return((char *) little);
    return (NULL);
}

/*int main(void)
{
	char big[30] = "aaabcabcd";
	//char little[10] = "aabc";

    printf("resultat vraie fonction : %s\n", strnstr(big, "abcd", 10));
    //printf("ma fonction : %s\n", ft_strnstr(big, "abcd", 9));

    return 0;
}*/