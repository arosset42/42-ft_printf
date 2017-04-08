#include "ft_printf.h"

void    ft_convert(va_list ap, t_args *cylva)
{
    long long int   ret;

    ret = 0;
    if (cylva->operation == '%')
        ret = 1;

    if (ret < 0 && ft_str_index("dDi", cylva->m_lenght) != -1 &&
    		ret != -9223372036854775807 - 1)
    {
    	opt[2] = '-';
    	ret *= -1;
    }
    if (ft_str_index("pdDioOuUxX%", cylva->m_lenght) != -1)
    	ft_print_nbr(&cylva, ret);
    // else
    // 	print_str(opt, plen, string);
}
