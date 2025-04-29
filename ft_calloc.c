/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:14:17 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/29 14:19:44 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size) 
{
    void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return NULL;
	ft_bzero(ptr, count * size);
	return (ptr);
}