/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:09:59 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/31 10:37:03 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applique la fonction ’f’ à chaque caractère de la chaîne de caractères
transmise comme argument, et en passant son index comme premier argument.
Chaque caractère est transmis par adresse à ’f’ afin d’être modifié si
nécessaire
s: La chaîne de caractères sur laquelle itérer.
f: La fonction à appliquer à chaque caractère.
Aucune valeur de retour */

#include <stdio.h>
#include <string.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
     int  i;

     i = 0;
     while(s[i])
     {
          f(i, &s[i]);
          i++;
     }
     s[i] = '\0';
}

/*void	ft_toupper_stri(unsigned int index, char * str)		// FCT EXPL
{
	if (str[index] >= 97 && str[index] <= 122)
		str[index] = str[index] - 32;
}

int     main() // using ft_toupper_stri
{
	char	str[] = "Yasmina";
	printf("%s\n", str);
	//ft_striteri(str, ft_toupper_stri);
	ft_striteri(str + 2, ft_toupper_stri);
	printf("%s\n", str);
	return (0);
}*/