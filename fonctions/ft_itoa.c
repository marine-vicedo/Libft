/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:28:32 by mvicedo           #+#    #+#             */
/*   Updated: 2022/06/02 12:28:23 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Convertit un int en chaine de char (ascii)
Alloue (avec malloc(3)) et retourne une chaîne de caractères représentant
l’entier ’n’ reçu en argument. Les nombres négatifs doivent être gérés.
n: L’entier à convertir.
Valeur de retour :
La chaîne de caractères représentant l’entier. NULL si l’allocation échoue.
Fonction autorisee : malloc */

/*
connaitre la longueur du int, puis convertir en ascii (/base 10)
retourne
*/

#include <stdlib.h>
#include <unistd.h>

static long	ft_nbrlen(long nbr)
{
	long	len;

	len = 0;
	if (nbr == 0)
		len++;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10; // nbr = nbr / 10 => on va diviser le nbr en centaines dizaine, unite, etc pour connaitre la longueur. Ex : 1234 / 123 / 12 / 1 == Len ++.. len = 4
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char *res;//str ou stocker le resultat de la conversion
	long len;
	long nbr;

	nbr = n;
	len = ft_nbrlen(nbr);
	res = malloc(sizeof(char) * len + 1);
	if (res == 0)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		res[--len] = nbr % 10 + 48; // on commence par la fin. ex 1234 => on remplit avec 1234 % 10 = 4, puis on divise par 10 et 123 % 10 = 3...
		nbr /= 10; // nbr = nbr / 10
	}
	return (res);
}

/*void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char *res = ft_itoa(-32767);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 2)
	{
		char *res = ft_itoa(9);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 3)
	{
		char *res = ft_itoa(-9);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 4)
	{
		char *res = ft_itoa(10);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 5)
	{
		char *res = ft_itoa(-10);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 6)
	{
		char *res = ft_itoa(8124);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 7)
	{
		char *res = ft_itoa(-9874);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 8)
	{
		char *res = ft_itoa(543000);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 9)
	{
		char *res = ft_itoa(-2147483648LL);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 10)
	{
		char *res = ft_itoa(2147483647);
		ft_print_result(res);
		free(res);
	}
	return (0);
}*/
