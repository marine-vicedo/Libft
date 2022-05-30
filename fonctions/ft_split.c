/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinevicedo <marinevicedo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:10:13 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/30 19:05:58 by marineviced      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc(3)) et retourne un tableau de chaînes de caractères
obtenu en séparant ’s’ à l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL
s: La chaîne de caractères à découper.
c: Le caractère délimiteur
Valeurs de retour : Le tableau de nouvelles chaînes de caractères
résultant du découpage. NULL si l’allocation échoue.
Fonctions autorisees : malloc, free */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

static size_t   ft_countwords(char const *s, char sep)
{
    size_t i; //compteur de la src du debut à la fin
    size_t count; // compteur de chaque mot

    count = 0;
    i = 0;
    while (s[i])
    {
	    while (s[i] && s[i] == sep)
	    		i++;
		if (s[i])
        		count++;
		while (s[i] && s[i] != sep)
               i++;
    }
    return (count);
}
/* calcule la taille du mot actuel a l'indice. */
static size_t ft_wordlen(char const *src, char sep, size_t index)
{
   	size_t  len;

    	len = 0;
    	while (src[index] && src[index] != sep)
    	{
	    	len++;
	    	index++;
    	}
    	return (len);   
}

char   *ft_fillwords(char const *s, char sep, size_t index)
{
    char    *word;
    size_t  wordlen;
    size_t  j;

    j = 0;
    wordlen = ft_wordlen(s, sep, index);
    word = (char *)malloc(sizeof(char) * (wordlen + 1));
    if (!word)
        return(NULL);
    while (j < wordlen)
    {
	    word[j] = s[index];
	    index++;
	    j++;
    }
    word[j] = '\0';
    return (word);
    
}

char **ft_split(char const *s, char sep)
{
    char **tab;
    size_t tab_size;
    size_t cell;
    size_t	i;

	i = 0;
    	cell = 0;
    	tab_size = ft_countwords(s, sep);
    	tab = (char **)malloc(sizeof(char *) * (tab_size + 1)); //+1 car le tab doit se terminer par \0
    	if (tab == 0)
        return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == sep)
               i++;
		if (s[i])
		{
			tab[cell] = ft_fillwords(s, sep, i); //word en entier
			cell++;
		}
		while (s[i] && s[i] != sep)
			i++;
	}
	tab[cell] = NULL;
    	return(tab);
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