/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:14:03 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/30 13:00:08 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Renvoie le dernier élément de la liste.
lst: Le début de la liste.
Valeur de retour : Dernier élément de la liste */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return NULL;
	while (lst->next != NULL)
		lst = lst->next; // le pointeur se deplace jusqu'a next = NULL
	return lst;
}