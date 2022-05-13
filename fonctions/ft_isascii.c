/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:56:24 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/13 16:34:55 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks whether c is a 7-bit unsigned char value that fits into the ASCII
character set. It returns non-zero if the character tests true.*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main(void)
{
    printf("%d\n", ft_isascii(127));
    printf("%d\n", isascii(127));
    return (0);
}*/
