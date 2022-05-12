/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:55:51 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/06 15:55:56 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isdigit function tests for a decimal character. It returns non-zero if the character tests true. */

#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
            return (1);
    return (0); 
}

int main(void)
{
    printf("%d\n", ft_isdigit('2'));
    printf("%d\n", isdigit('2'));
    return (0);
}
