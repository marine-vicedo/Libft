/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:26:30 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/10 15:26:32 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* tolower() converts uppercase letter to lowercase.
It returns the converted letter or c if the conversion was not possible. */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}

/*int main(void)
{
    printf("%c\n", tolower('A'));
    printf("%c\n", ft_tolower('A'));
    return 0;
}*/