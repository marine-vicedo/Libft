/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:02:23 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/12 17:02:28 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Écrit le caractère ’c’ sur le descripteur de fichier donné.
c: Le caractère à écrire.
fd: Le descripteur de fichier sur lequel écrire. */

#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int main(void)
{
    char c  = 'a';
    int fd = 2;

    ft_putchar_fd(c, fd);
    return (0);
}
