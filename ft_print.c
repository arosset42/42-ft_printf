#include "ft_printf.h"

// void	ft_print_nbr(t_args *cylva, long long int ret)
// {
//     ft_putnbr
// }

void    ft_print_str(t_args cylva)
{
    int     i;

    i = 0;
    if ((cylva.operation) == 's' && !cylva.m_lenght)
        ft_putstr(cylva.str);
    else if ((cylva.operation) == 'c')
        ft_putchar(cylva.c);

}
