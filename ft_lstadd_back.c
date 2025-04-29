/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:17:16 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/29 13:40:20 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*temp;
        
    if (!lst || !new) // Vérifie si lst ou new est NULL
        return;
    if (!*lst) // Si la liste est vide, le nouvel élément devient la tête
    {
		*lst = new;
		return;
    }
	temp = *lst; // Temporaire pour parcourir la liste
	while (temp->next) // Parcourt jusqu'au dernier nœud
        temp = temp->next;
    temp->next = new; // Ajoute le nouvel élément à la fin
}   
