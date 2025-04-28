/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:58:52 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/24 17:41:29 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (!lst || !del) // Vérifie si lst ou del est NULL
        return;
    while (*lst) // Parcourt la liste tant qu'il y a des nœuds
    {
        temp = (*lst)->next;    // Stocke le nœud suivant
        del((*lst)->content);   // Libère le contenu du nœud actuel
        free(*lst);            // Libère le nœud lui-même
        *lst = temp;           // Passe au nœud suivant
    }
    *lst = NULL; // Met la liste à NULL pour indiquer qu'elle est vide
}