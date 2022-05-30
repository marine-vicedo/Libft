/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinevicedo <marinevicedo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:30:21 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/30 19:09:27 by marineviced      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Écrit La chaîne de caractères ’s’ sur le descripteur de fichier donné suivie d’un retour à la ligne.
s: La chaîne de caractères à écrire.
fd: Le descripteur de fichier sur lequel écrire.
Fonction autorisee : write */

#include "libft.h"

/*void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}*/

void ft_putendl_fd(char *s, int fd)
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
    ft_putchar_fd('\n', fd);
}

/*int main(void)
{
    char s[15] = "hello world !";
    int fd = 1;

    ft_putendl_fd(s, fd);
    return (0);
}*/