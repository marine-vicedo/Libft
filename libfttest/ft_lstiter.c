/* Itère sur la liste ’lst’ et applique la fonction
’f’ au contenu chaque élément.
st: L’adresse du pointeur vers un élément.
f: L’adresse de la fonction à appliquer.
Valeur : aucune */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if(!f)
        return;
    while (lst)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}