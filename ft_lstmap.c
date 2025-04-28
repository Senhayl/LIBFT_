/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:00:53 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/25 11:11:45 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list = NULL;
    t_list  *new_node;

    if (!lst || !f)
        return (NULL);
    while (lst)
    {
        new_node = ft_lstnew(f(lst->content)); // Crée un nouveau nœud
        if (!new_node) // Si l'allocation échoue
        {
            ft_lstclear(&new_list, del); // Libère la nouvelle liste
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node); // Ajoute le nouveau nœud à la nouvelle liste
        lst = lst->next; // Passe au nœud suivant
    }
    return (new_list);
}