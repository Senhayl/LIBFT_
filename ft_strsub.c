/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:31:18 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/29 14:11:22 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*strsub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	strsub = (char *)malloc(sizeof(char) * (len + 1));
	if (!strsub)
		return (NULL);
	j = 0;
	i = start;
	while (s[i] != '\0' && j < len)
	{
		strsub[j] = s[i];
		i++;
		j++;
	}
	strsub[j] = '\0';
	return (strsub);
}
