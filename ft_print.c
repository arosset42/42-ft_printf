#include "ft_printf.h"

// void	ft_print_nbr(t_args *cylva, long long int ret)
// {
//     ft_putnbr
// }

void    ft_print_str(t_args *cylva)
{
    int     i;

    i = 0;
    if (S_OPE == 's' && !S_M_LEN)
        ft_putstr(cylva->str);
    else if (S_OPE = 'c')
        ft_putchar(cylva->c);

}
