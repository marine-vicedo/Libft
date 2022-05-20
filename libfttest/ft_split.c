/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:46:08 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/18 14:46:11 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne un tableau de chaînes de caractères
obtenu en séparant ’s’ à l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL.
s: La chaîne de caractères à découper.
c: Le caractère délimiteur.
Valeur de retour : Le tableau de nouvelles chaînes de caractères
résultant du découpage. NULL si l’allocation échoue.*/

#include <string.h>
#include "libft.h"

size_t ft_countwords(char const *s, char c)
{
     size_t    i;// COMPT de la string *s
     size_t    count;// COMPT des words

     i = 0;
     count = 0;
     while(s[i])
     {
          while (s[i] && s[i] == c) // on passe le caractere separateur
               i++;
          
          if (s[i] && s[i] != c)// debut du mot
          {
               count++;
               while(s[i] && s[i] != c)
                    i++;  
          }
     }
     return(count);
}

size_t  ft_wordlen(char const *s, char c, int i)
{
     size_t    len;

     len = 0;
     while (s[i] && s[i] != c)
     {
               len ++;
               i++;
     }
     return (len);
}

static char	**ft_freetab(char **s, size_t n)
{
	while (n > 0)
	{
		free(s[n]);
		n--;
	}
	free(s);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
     char **tab;
     size_t    i;
     size_t    j;
     size_t    k;

     tab = (char **)malloc(sizeof(char *) * ft_countwords(s, c) + 1);
     if (tab == 0)
          return(NULL);
     i = 0;
     j = -1;
     while (++j < ft_countwords(s, c))
     {
          while (s[i] && s[i] == c)
               i++;
		k = 0;
          tab[j] = (char *)malloc(sizeof(char) * ft_wordlen(s, c, i) + 1);
          if (tab[j] == 0)
               return (ft_freetab(tab, j), NULL);
          while (s[i] && s[i] != c)
               tab[j][k++] = s[i++];
          tab[j][k] = '\0';
     }
     tab[j] = NULL;
     return (tab);

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
	char	**tabstr;
	int		i;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	i = 0;
	if ((arg = atoi(argv[1])) == 1)
	{
		if (!(tabstr = ft_split("          ", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 2)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 3)
	{
		if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 4)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 5)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 6)
	{
		if (!(tabstr = ft_split("", 'z')))
			ft_print_result("NULL");
		else
			if (!tabstr[0])
				ft_print_result("ok\n");
	}
	return (0);
}*/
