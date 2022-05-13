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
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.*/

#include "libft.h"

/*size_t ft_strlen(const char *s) // a retirer / libft
{
    unsigned int    i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}*/

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    dst_len;
    unsigned int    src_len;

    i = 0;
    j = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    
    while (dst[i] && (i < size))
        i++;
        
    while (src[j] && (j < (size - 1)))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    if (size != '\0' && size >= dst_len)
        dst[i] = '\0';

    if (size < dst_len)
        return (src_len + size);
    else
        return (dst_len + src_len);
}

/*int main (void)
{
    char    src1[100] = "This is source"; //lenght = 14
    char    dst1[100] = "This is destination";//lenght = 19

    char    src2[100] = "This is source"; //lenght = 14
    char    dst2[100] = "anchdef";//lenght = 7

   printf("result strlcat : %ld\n", strlcat(dst1, src1, 20));
   printf("result strlcat : %ld\n", strlcat(dst2, src2, 8));
   
   printf("result ft_strlcat : %ld\n", ft_strlcat(dst1, src1, 20));
   printf("result ft_strlcat : %ld\n", strlcat(dst2, src2, 8));
   
   return (0);
}*/

