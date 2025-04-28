#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int lens;

    if (!s)
        return (NULL);
    lens = ft_strlen(s);
    while (lens >= 0)
    {
        if (s[lens] == (char) c)
            return ((char *)s + lens);
        lens--;
    }
    return (NULL);
}