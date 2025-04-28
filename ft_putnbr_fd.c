#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long    nb;

    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        write(fd, '-', 1);
    } 
    if (nb > 9)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar((nb % 10) + '0');
}