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