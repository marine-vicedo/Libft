/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:53:19 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/25 14:28:23 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb && ((nmemb * size) / nmemb) != size)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
