#include "libft.h"

void ft_putnbr(int n)
{
    long    nb;

    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        write(1, '-', 1);
    }
    if (nb > 9)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10 + '0'));
}