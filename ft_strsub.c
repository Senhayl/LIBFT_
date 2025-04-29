/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:31:18 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/29 14:09:14 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t	i;
    size_t	j;
    char	*strsub;

	if (!s) // Vérification si s est NULL avant toute opération
		return (NULL);
	if (start >= ft_strlen(s)) // Vérification si start dépasse la longueur de s
		return (NULL);
	if (start + len > ft_strlen(s)) // Ajuster len si nécessaire
		len = ft_strlen(s) - start;
	strsub = (char *)malloc(sizeof(char) * (len + 1)); // Allocation mémoire
	if (!strsub) // Vérification si malloc a échoué
		return (NULL);
	j = 0;
	i = start;
	while (s[i] != '\0' && j < len)
	{
			strsub[j] = s[i];
			i++;
			j++;
	}
	strsub[j] = '\0'; // Terminer la chaîne avec un caractère nul
	return (strsub);
}