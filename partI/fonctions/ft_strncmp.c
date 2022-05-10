/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:05:28 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/10 17:05:30 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* compare two strings.
The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and s2.
It returns an integer less than, equal to, or greater than zero if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.
*/

#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", strncmp("ananas", "abc", 4));
    printf("%d\n", ft_strncmp("ananas", "abc", 4));
	return (0);
}
