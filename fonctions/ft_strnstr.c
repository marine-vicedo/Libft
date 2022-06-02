/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:26:46 by mvicedo           #+#    #+#             */
/*   Updated: 2022/06/02 12:39:42 by mvicedo          ###   ########.fr       */
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
#include <string.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{   
    size_t	i;

	i = 0;
    if (ft_strlen(little) == 0)
        return ((char *)big);
    if (ft_strlen(little) > len)
        return (NULL);

    while (*big && i < len)
    {
        if (ft_strncmp(((char *)big + i), little, ft_strlen(little)) == 0) // *(big + i) == big[i]
		{
			if (i + ft_strlen(little) > len)
				return (NULL);
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char big[30] = "bonjourno";
	char little[10] = "jour";

    //printf("resultat vraie fonction : %s\n", strnstr(big, little, 2));
    printf("ma fonction : %s\n", ft_strnstr(big, little, 6));

    return 0;
}