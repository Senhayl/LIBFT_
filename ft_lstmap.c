/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:00:53 by chevrethis        #+#    #+#             */
/*   Updated: 2025/05/13 13:05:06 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*new_list = NULL;
    t_list	*new_node;

	if (!lst || !f)
		return (NULL);
    while (lst)
    {
        if (!(new_node = (t_list *)malloc(sizeof(t_list))) || 
            !(new_node->content = f(lst->content)))
        {
            ft_lstclear(&new_list, del);
            free(new_node);
            return (NULL);
        }
        new_node->next = NULL;
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}
