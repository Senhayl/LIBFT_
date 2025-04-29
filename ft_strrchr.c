/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:31:14 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/29 14:30:00 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strrchr(char *str, char c)
{
    int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] = c)
			return (&str[i]);
		i++;
	}
	return (0);
}
