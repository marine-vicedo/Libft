/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:45:35 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/30 13:40:50 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ajoute l’élément ’new’ à la fin de la liste.
lst: L’adresse du pointeur vers le premier élément de la liste.
new: L’adresse du pointeur vers l’élément à rajouter à la liste.
Valeur de retour : aucune 
*/

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	if (lst == NULL || new == NULL) // si les pointeurs ne pointent sur rien
		exit(EXIT_FAILURE);
	if (*lst) // si la liste a un premier element = si le debut de la liste n'est pas nulle
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}