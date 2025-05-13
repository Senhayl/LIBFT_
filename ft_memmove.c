/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:15:10 by chevrethis        #+#    #+#             */
/*   Updated: 2025/05/13 13:15:24 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t	i;

    if (!dest && !src && n > 0)
        return (NULL);
    if (dest > src)
    {
        i = n;
        while (i > 0)
        {
            i--;
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
	return (dest);
}
