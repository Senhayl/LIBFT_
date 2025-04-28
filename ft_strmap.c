#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    int i;
    char *map;

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