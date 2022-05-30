/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:47:42 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/30 12:09:03 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Compte le nombre d’éléments de la liste.
lst: Le début de la liste
Valeur de retour : taille de la liste */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	size_t size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return size;
}