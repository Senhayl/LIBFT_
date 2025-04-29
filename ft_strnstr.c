/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:31:10 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/29 13:31:11 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(char *str, char *to_find)
{
    int i;
    int j;
    int k;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        if ((str[i] == to_find[j]))
        {
            while (str[i] == to_find[j])
            {
                i++;
                j++;
            }
            if (to_find[j] == '\0')
                 return (&str[i-j]);
        }
        i++;
    }
    return (str);
}