/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:16:04 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/29 14:29:31 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int	lens;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	while (lens >= 0)
	{
		if (s[lens] == (char) c)
			return ((char *)s + lens);
		lens--;
	}
	return (NULL);
}
