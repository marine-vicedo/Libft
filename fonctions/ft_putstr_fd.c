/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:11:57 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/12 17:11:59 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Écrit la chaîne de caractères ’s’ sur le descripteur de fichier donné.
s: La chaîne de caractères à écrire.
fd: Le descripteur de fichier sur lequel écrire.
*/

#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}

int main(void)
{
    char s[15] = "hello world !";
    int fd = 1;

    ft_putstr_fd(s, fd);
    return (0);
}