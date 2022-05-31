/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:39:00 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/31 11:44:57 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ajoute l’élément ’new’ au début de la liste.
lst: L’adresse du pointeur vers le premier élément de la liste.
new: L’adresse du pointeur vers l’élément à rajouter à la liste
Valeur de retour : aucune */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return;

	new->next = *lst; // l'element suivant vers lequel pointe new est liste (debut de la liste)
	*lst = new; // on adapte le pointeur de lst vers new (nouvel element)
}

