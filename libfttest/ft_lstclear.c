/* Supprime et libère la mémoire de l’élément passé en
paramètre, et de tous les éléments qui suivent, à l’aide de ’del’ et de free(3)
Enfin, le pointeur initial doit être mis à NULL.
lst: L’adresse du pointeur vers un élément.
del: L’adresse de la fonction permettant de supprimer le contenu d’un élément.
Valeur de retour : aucune */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmp;

    if(!del || !lst || !*lst)
        return;
    while(*lst) // on parcourt la liste
        {
            tmp = (*lst)->next; // tmp pointe vers le dernier element = NULL
            ft_lstdelone((*lst), del);
            *lst = tmp; // le pointeur initial est mis a NULL
        }

}