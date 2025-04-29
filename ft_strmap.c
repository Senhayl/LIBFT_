/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:30:57 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/29 14:28:08 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
    int		i;
    char	*map;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	map = (char *)malloc(sizeof(char)*(i + 1));
	if (!map)
		return (NULL);
	i = 0;
	while (s[i])
	{
		map[i] = f(s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
