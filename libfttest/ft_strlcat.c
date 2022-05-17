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
//#include <bsd/string.h>

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
    size_t    dst_len;
    size_t   src_len;

    i = ft_strlen(dst);
    j = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    
    if (size == 0)
        return (ft_strlen(src));
    while (src[j] && (i + j) < size - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[j + i] = '\0';
    if(size <= dst_len)
        dst_len = size;
    return (dst_len + src_len);
}

/*void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}
int main (void)
{
    char dest[20];
    memset(dest, 'r', 15);
	//ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
    ft_print_result(strlcat(dest, "lorem ipsum dolor sit amet", 5));
	write(1, "\n", 1);
	write(1, dest, 15);
   
   return (0);
}*/

