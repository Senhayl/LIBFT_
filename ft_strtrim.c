#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t len;
    char *trimmed;

    if (!s) // Vérification si s est NULL
        return (NULL);

    // Trouver le premier caractère non blanc
    start = 0;
    while (s[start] && (s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
        start++;

    // Si la chaîne est entièrement composée d'espaces blancs
    if (s[start] == '\0')
        return (ft_strdup(""));

    // Trouver le dernier caractère non blanc
    end = ft_strlen(s) - 1;
    while (end > start && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
        end--;

    // Calculer la longueur de la chaîne à copier
    len = end - start + 1;

    // Allouer la mémoire pour la chaîne résultante
    trimmed = (char *)malloc(sizeof(char) * (len + 1));
    if (!trimmed)
        return (NULL);

    // Copier la partie utile de la chaîne
    ft_strncpy(trimmed, &s[start], len);
    trimmed[len] = '\0'; // Ajouter le caractère nul

    return (trimmed);
}