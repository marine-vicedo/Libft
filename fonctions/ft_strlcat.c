/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:52:18 by mvicedo           #+#    #+#             */
/*   Updated: 2022/06/01 19:09:10 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcat() function appends the NUL-terminated string src to the end
of dst.  It will append at most size - strlen(dst) - 1 bytes,
NUL-terminating the result. size : taille de la destination à copier*/

 /* Appends src to string dst of size size (unlike strncat, size is the
 * full size of dst, not space left).  At most size-1 characters
 * will be copied.  Always NUL terminates (unless size <= strlen(dst)).
 * Returns strlen(initial dst) + strlen(src); if retval >= siz,
 * truncation occurred.
 */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size) // size = n octets de la src a copier dans dst
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0 || size <= dst_len)
		return (src_len + size);
	while (src[i] && (i + dst_len) < size - 1) // 
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len); // resultat n'inclut pas le null
}

void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}
int main (void)
{
    
    char dst[100] = "1234";
    char src[100] = "ABCD";
    //printf("%ld\n", strlcat(dst, src, 7));
    //printf("%s\n", dst);
    printf("%ld\n", ft_strlcat(dst, src, 7));
   
   return (0);
}
