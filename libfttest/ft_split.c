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

static size_t ft_countwords(char const *s, char c)
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

static size_t  ft_wordlen(char const *s, char c)
{
     size_t    i;

     i = 0;
     while (s[i] && s[i] != c)
          i++;
     return (i);
}

/*static char	**ft_freetab(char **s)
{
	size_t	i;

	i = 0;
	while(s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}*/


static char *ft_result(char const *s, size_t i, char c) // i = compteur src
{
	char *str;
	size_t	k; //compteur source
	size_t	wordsize;
	char	*word;

	str = (char *)s;
	k = 0;
	wordsize = ft_wordlen(&s[i], c);
	while (k < wordsize)
	{
		word = (char *)malloc(sizeof(char) * wordsize + 1);
		if (word == 0)
			return(NULL);
		while(str[i] && str[i] != c)
		{
			word[k] = str[i];
			k++;
			i++;
		}
	}
	word[k] = '\0';
	return(word);

}


char **ft_split(char const *s, char c)
{
     char **tab;
     size_t    size;
	size_t	i;
	size_t	j;

	size =  ft_countwords(s, c);
	if (s == 0)
		return(NULL);
     tab = (char **)malloc(sizeof(char *) * size + 1);
     if (tab == 0)
          return(NULL);
     i = 0;
     j = 0;
     while (j < ft_countwords(s, c))
     {
          if (s[i] && s[i] == c)
               i++;
		tab[j] = ft_result(s, i, c);
		j++;
     }
     tab[j] = NULL;
     return (tab);

}

void	ft_print_result(char const *s)
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
}
