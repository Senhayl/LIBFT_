#include "libft.h"


char    *ft_strdup(const char *s)
{
    char    *dup;
    size_t  len = strlen(s) + 1;

    dup = (char *)malloc(len);
    if (dup == NULL)
    {
        return NULL;
    }
    memcpy(dup, s, len);
    return dup;
}