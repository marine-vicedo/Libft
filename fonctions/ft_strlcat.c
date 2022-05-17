/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:52:18 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/10 11:52:25 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcat() function appends the NUL-terminated string src to the end of dst. 
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
size : taille de la destination à copier
*/

#include "libft.h"

size_t ft_strlen(const char *s) // a retirer / libft
{
    unsigned int    i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    dst_len;
    unsigned int    src_len;

    i = 0;
    j = ft_strlen(dst);
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    
    if (size <= ft_strlen(dst))
        return (size + ft_strlen(dst));
    while (src[i] && (i + 1) < size)
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[j] = '\0';
    return (ft_strlen(dst) + ft_strlen(&src[i]));
}

/*int main (void)
{
    char    src1[30] = "AAAAAAAAA"; //lenght = 9
    char    dst1[2] = "BB";//lenght = 2
   
   printf("result ft_strlcat : %ld\n", ft_strlcat(dst1, src1, 1));
   
   return (0);
}*/

