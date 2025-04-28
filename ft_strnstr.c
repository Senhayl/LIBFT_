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