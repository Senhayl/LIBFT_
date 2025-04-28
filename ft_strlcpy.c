#include "libft.h"

int *ft_strlcpy(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i > n - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}
