#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *map;

    if (!s || !f)
        return (NULL);
    i = 0;
    while (s[i])
        i++;
    map = (char *)malloc(sizeof(char) *(i + 1));
    if (!map)
        return (NULL);
    i = 0;
    while (s[i])
    {
        map[i] = f(i, s[i]);
        i++;
    }
    map[i] = '\0';
    return (map);
}