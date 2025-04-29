/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:16:11 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/29 14:18:47 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len = strlen(s) + 1;

	dup = (char *)malloc(len);
	if (dup == NULL)
		return NULL;
	memcpy(dup, s, len);
	return dup;
}