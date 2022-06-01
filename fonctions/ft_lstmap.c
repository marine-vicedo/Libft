/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:38:20 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/31 17:28:15 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itère sur la liste ’lst’ et applique la fonction ’f ’au contenu de chaque élément.
Crée une nouvelle liste résultant des applications successives de ’f’.
La fonction ’del’ est là pour détruire le contenu d’un élément si nécessaire.
lst: L’adresse du pointeur vers un élément.
f: L’adresse de la fonction à appliquer.
del: L’adresse de la fonction permettant de supprimer le contenu d’un élément
Valeur de retour : La nouvelle liste. NULL si l’allocation échoue
fonctions autorisees : malloc, free */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *res; //nouvelle liste
	t_list *tmp; //noeud temporaire

	if (!lst || !del)
		return NULL;
	res = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst-> content)); // le noeud tmp prend le contenu
		if (!tmp)
		{
			ft_lstclear(&res, del);
			return NULL;
		}
		ft_lstadd_back(&res, tmp); //ajoute tmp a la fin de liste
		tmp = tmp->next; // tmp devient egal a NULL donc content ecrase
		lst = lst->next; // pointeur liste se deplace
	}
	return (res);
}