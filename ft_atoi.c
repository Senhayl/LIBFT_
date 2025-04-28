#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int value;

    i = 0;
    sign = 1;
    value = 0;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign = -sign;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        value = value * 10 + (nptr[i] - '0');
        i++;
    }
    return (value * sign);
}