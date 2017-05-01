#include "ft_printf.h"

void    ft_convert(va_list ap, t_args *cylva)
{
    long long int   ret;

    ret = 0;
    if (S_OPE == '%')
        ret = 1;
    else if (S_OPE == 'C' || (S_OPE == 'l' && S_OPE == 'c'))
        cylva->wchar = va_arg(ap, wchar_t);
    else if (S_OPE == 's' && S_M_LEN != 'l')
        cylva->str = va_arg(ap, char *);
    else if (S_OPE == 'S' || (S_M_LEN == 'l' && S_OPE == 's'))
        cylva->wstr = va_arg(ap, wchar_t *);
    else if (S_OPE == 'c')
        cylva->c = va_arg(ap, int);
    // else
        // ret = ft_convert_nb(ap, &cylva);
    if (ret < 0 && ft_str_index("dDi", S_M_LEN) != -1 &&
    		ret != -9223372036854775807 - 1)
    {
    	cylva->f_moins = '-';
    	ret *= -1;
    }
    if (ft_str_index("pdDioOuUxX%", S_OPE) != -1)
        printf("coucou print DD\n");
    	// ft_print_nbr(&cylva, ret);
    else
        // ft_putstr(cylva->str);
    	ft_print_str(&cylva);
}
