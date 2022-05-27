/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicedo <mvicedo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:45:17 by mvicedo           #+#    #+#             */
/*   Updated: 2022/05/27 18:14:35 by mvicedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc(3)) et renvoie un nouvel élément. La variable membre
’content’ est initialisée à l’aide de la valeur du paramètre ’content’.
La variable ’next’ est initialisée à NULL.
content: Le contenu du nouvel élément
Valeur de retour : le nouvel element 


libft.h contains : 

typedef struct s_list // =element
{
    void            *content;  // donnee contenue dans le maillon
    struct s_list   *next; // adresse du maillon suivant de la liste ou NULL si c'est le dernier
}                   t_list; // écrire t_list va venir remplacer l'écriture de struct t_list

*/
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *element;
	
	element = malloc(sizeof(t_list)); //equivaut a (sizeof(*element));
	
	if (element == NULL)
	{
		exit(EXIT_FAILURE);
	}
	element->content = content;
	element->next = NULL;

	return element;
}