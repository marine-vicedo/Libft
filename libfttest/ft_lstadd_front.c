/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:39:00 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/27 18:14:12 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ajoute l’élément ’new’ au début de la liste.
lst: L’adresse du pointeur vers le premier élément de la liste.
new: L’adresse du pointeur vers l’élément à rajouter à la liste
Valeur de retour : aucune

typedef struct s_list // =element
{
    void            *content;  // donnee contenue dans le maillon
    struct s_list   *next; // adresse du maillon suivant de la liste ou NULL si c'est le dernier
}                   t_list; // écrire t_list va venir remplacer l'écriture de struct t_list

*/

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list 	*element;

	element = ft_lstnew(void *content);
	lst = malloc(sizeof(lst));
	new = malloc(sizeof(new));

	if (lst == NULL || new == NULL)
	{
		exit(EXIT_FAILURE);
	}

	lst-element = new->next;
	new->next = lst->element;
}

