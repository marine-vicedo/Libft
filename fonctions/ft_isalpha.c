/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:54:31 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/13 16:26:56 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isalpha function tests for an alpha character.
It returns non-zero if the character tests true. */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int main(void)
{
    printf("%d\n", ft_isalpha('A'));
    printf("%d\n", isalpha('A'));
    return (0);
}*/
