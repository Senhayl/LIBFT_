/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:31:10 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/30 11:47:51 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
    size_t	j;

    if (!*needle)
        return ((char *)haystack);
    i = 0;
    while (haystack[i] && i < len)
    {
        if (haystack[i] == needle[0])
        {
            j = 0;
            while (haystack[i + j] == needle[j] && (i + j) < len)
            {
                if (needle[j + 1] == '\0')
                    return ((char *)&haystack[i]);
                j++;
            }
        }
        i++;
    }
    return (NULL);
}
