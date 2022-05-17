/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:56:43 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/13 16:32:37 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for any printable character  including space.*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int main(void)
{
    printf("%d\n", ft_isprint(32));
    printf("%d\n", isprint(32));
    return (0);
}*/
