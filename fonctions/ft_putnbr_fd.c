/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:36:14 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/12 17:36:19 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Écrit l’entier ’n’ sur le descripteur de fichier donné.
n: L’entier à écrire.
fd: Le descripteur de fichier sur lequel écrire. */

#include "libft.h"

/*void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}*/

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{	
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd((n + '0'), fd);
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}

/*int main(void)
{
    int nb = -123;
    int fd = 1;

    ft_putnbr_fd(nb, fd);
    return (0);
}*/

