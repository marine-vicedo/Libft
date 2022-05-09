/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:57:05 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/06 15:57:08 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').*/
/* size_t est un type non signe, represente des valeurs positives*/

#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int main(void)
{
    printf("%ld\n", ft_strlen("ab25"));
    printf("%ld\n", strlen("ab25"));
    return (0);
}