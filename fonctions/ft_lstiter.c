/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:40:45 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/31 10:41:38 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itère sur la liste ’lst’ et applique la fonction
’f’ au contenu chaque élément.
lst: L’adresse du pointeur vers un élément.
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