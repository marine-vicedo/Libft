/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:53:19 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/24 16:56:29 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	sizemax;

	sizemax = 2147483647;
	if (nmemb > (sizemax / size))
		return (NULL);
	ptr = malloc (nmemb * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
