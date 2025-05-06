/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:00:53 by chevrethis        #+#    #+#             */
/*   Updated: 2025/05/06 16:15:10 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*new_list;
    t_list	*new_node;
    t_list	*current;

    new_list = NULL;
    current = NULL;
    if (!lst || !f)
        return (NULL);
    while (lst)
    {
        // Créer un nouveau nœud
        new_node = (t_list *)malloc(sizeof(t_list));
        if (!new_node)
        {
            // En cas d'erreur, supprimer toute la liste créée
            while (new_list)
            {
                current = new_list->next;
                if (del)
                    del(new_list->content);
                free(new_list);
                new_list = current;
            }
            return (NULL);
        }
        // Initialiser le nouveau nœud
        new_node->content = f(lst->content);
        new_node->next = NULL;

        // Ajouter le nouveau nœud à la fin de la liste
        if (!new_list)
            new_list = new_node;
        else
            current->next = new_node;

        // Mettre à jour le pointeur `current`
        current = new_node;

        // Passer au nœud suivant dans la liste d'origine
        lst = lst->next;
    }
    return (new_list);
}
