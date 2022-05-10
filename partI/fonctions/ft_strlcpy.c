/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:01:28 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/10 11:01:30 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcpy() function copy strings.
strcpy is used to copy a string ponted by SRC (including NULL character) to the DEST (charater array)

Take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as size is
larger than 0. Note that a byte for the NUL should be included in size. 
The function returns the total lenght of the new string (the lenght of src).*/

#include <stdio.h>
#include <bsd/string.h>

size_t ft_strlen(const char *s) // a retirer / libft
{
    unsigned int    i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    if (size > 0)
    {
        /* Always copy 1 less then the destination to make room for the nul */
        while (src[i] != '\0' && i < (size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (ft_strlen(src)); //Return the number of bytes copied
}

int main(void)
{
    char    dest[100];
    char    src[100] = "newst";

    printf("%ld\n", strlcpy(dest, src, 8));
    printf("%ld\n", ft_strlcpy(dest, src, 8));

    return 0;
}
