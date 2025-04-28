#include "libft.h"

void    *ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;

    i = 0;
    while ((*(unsigned char*)(s1 + i) != '\0' || *(unsigned char*)(s2 + i) != '\0') && i < n)
    {
        if (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i) != 0)
            return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
        i++;
    }
    return (0);
}