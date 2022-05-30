/* Libère la mémoire de l’élément passé en argument en utilisant
la fonction ’del’ puis avec free(3). La mémoire de ’next’ ne doit pas être free.
lst: L’élément à free
del: L’adresse de la fonction permettant de supprimer le contenu de l’élément.
Valeur de retour : aucune */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*)) // void* en argument est un pointeur vers tout type objet
{
    if(!del)
        return;
    if (lst)
    {
        (*del)(lst->content);
        free(lst);
    }
}