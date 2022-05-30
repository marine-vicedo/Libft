/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinevicedo <marinevicedo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:08:40 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/30 19:06:35 by marineviced      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de
caractères qui est dupliquée depuis s. La mémoire occupée par cette nouvelle
chaîne est obtenue en appelant malloc, et doit donc être libérée avec free
Fonction autorisee : malloc */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*dest;

	i = 0;
	len = ft_strlen((char *)s);
	dest = (char *)malloc ((len + 1) * sizeof(char));
	if (dest == 0)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_strdup(argv[1]));
        printf("%s\n", strdup(argv[1]));

	free (dest)
	return (0);
}
*/
