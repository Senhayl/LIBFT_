/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chevrethis <chevrethis@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:38:49 by chevrethis        #+#    #+#             */
/*   Updated: 2025/04/27 10:39:06 by chevrethis       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction pour compter le nombre de mots dans la chaîne
static size_t count_words(char const *s, char c)
{
    size_t count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

// Fonction pour allouer et copier un mot
static char *allocate_word(char const *s, char c)
{
    size_t len = 0;
    char *word;

    while (s[len] && s[len] != c)
        len++;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    ft_strncpy(word, s, len);
    word[len] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    size_t i = 0;
    size_t words;
    char **result;

    if (!s)
        return (NULL);
    words = count_words(s, c);
    result = (char **)malloc(sizeof(char *) * (words + 1));
    if (!result)
        return (NULL);
    while (*s)
    {
        if (*s != c)
        {
            result[i] = allocate_word(s, c);
            if (!result[i])
            {
                while (i > 0)
                    free(result[--i]);
                free(result);
                return (NULL);
            }
            i++;
            while (*s && *s != c)
                s++;
        }
        else
            s++;
    }
    result[i] = NULL;
    return (result);
}