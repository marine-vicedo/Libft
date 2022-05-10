/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:07:00 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/10 15:07:10 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* toupper() converts lowercase letter to uppercase.
It returns the converted letter or c if the conversion was not possible. */

#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}

int main(void)
{
    printf("%c\n", toupper('a'));
    printf("%c\n", ft_toupper('a'));
    return 0;
}
