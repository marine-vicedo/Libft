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

size_t ft_strlen(const char *s)
{
    unsigned int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t ft_countwords(char const *s, char c)
{
     size_t    i;// COMPT de la string *s
     size_t    count;// COMPT des words

     i = 0;
     count = 0;

     while(s[i])
     {
          while (s[i] == c) // on passe le caractere separateur
               i++;
          
          while (s[i] != c)// debut du mot
          {
               count++;
               i++;
          }
          
     }
     return(count);
}

size_t  ft_wordlen(char const *s, char c, int i)
{
     size_t    len;

     len = 0;
     while (s[i])
     {
          if(s[i] != c)
          {
               i++;
               len ++;
          }
     }
     return(len);
}

char **ft_split(char const *s, char c)
{
     char **tab;
     char *str_index;
     size_t    i; //COMP index tableau
     size_t    j; //COMP dans la string
     size_t    k;

     tab = (char **)malloc(sizeof(char) * ft_countwords(s, c) + 1); // allocation nb cases du tableau
     if (tab == 0)
          return(NULL);
     i = 0;
     j = 0;
     k = 0;
     while(j < ft_wordlen(s, c, i))
     {
          str_index[j] = malloc(sizeof(char) * ft_wordlen(s, c, i) + 1); // allocation longueur str index
          if (str_index == 0)
               return(NULL);
          while (s[i])
          {
               str_index[j][k] = s[i];
                    i++;
                    k++;
          }
          str_index[j][k] = '\0';
          return (str_index);
     }
     j++;

}

/*void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}
int  main(void)
{
     char	**tabstr;
	int		i;
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
}*/