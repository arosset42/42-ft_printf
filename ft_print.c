#include "ft_printf.h"

// void	ft_print_nbr(t_args *cylva, long long int ret)
// {
//     ft_putnbr
// }

void    ft_print_str(t_args cylva)
{
    int     total;

    total = ft_str_max_print(&cylva);
    //ft_putnbr(total);
    if (cylva.operation == 's' && cylva.m_lenght == '0')
    {
        total == 0 ? ft_put_len_str(NULL, -1) : ft_put_len_str(cylva.str, total);
    }
    else if (cylva.operation == 'c')
        ft_putchar(cylva.c);
    else if (cylva.operation == 'S' || (cylva.m_lenght == 'l' && cylva.operation == 's'))
    {
        if (total == -1)
        {
            ft_put_len_str(NULL, -1);
            total = 6;
        }
        // ft_putwstr(cylva.wstr, total);
    }
    // else
        // ft_putwchar(string.wchar);
    cylva.len_print += total > cylva.width ? total : cylva.width;
    if (cylva.f_moins == 1)
    {
        ft_put_len_str(" ", cylva.width - total);
    }
}

void	ft_print_nbr(t_args cylva, long long int nbr)
{
    if (!nbr && cylva.precision == -1 && cylva.operation == 'o' && cylva.f_diese == '#')
		cylva.precision = 0;
}
