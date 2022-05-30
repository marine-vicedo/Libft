/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinevicedo <marinevicedo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:02:23 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/30 19:10:28 by marineviced      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Écrit le caractère ’c’ sur le descripteur de fichier donné.
c: Le caractère à écrire.
fd: Le descripteur de fichier sur lequel écrire.
Fonction autorisee : write */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*int main(void)
{
    char c  = 'a';
    int fd = 2;

    ft_putchar_fd(c, fd);
    return (0);
}*/
