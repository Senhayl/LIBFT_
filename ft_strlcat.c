#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  destlen = ft_strlen(dest);
    size_t  srclen = ft_strlen(src);
    size_t  i;

    if (size <= destlen)
        return (size + srclen);

    i = 0;
    while (src[i] != '\0' && destlen + 1 < size)
    {
        dest[destlen] = src[i];
        destlen++;
        i++;
    }
    dest[destlen] = '\0';

    return (destlen + ft_strlen(&src[i]));
}