#include "ft_printf.h"

void 	ft_get_tag(char **format, t_args *cylva)
{
		(*format)++;
		ft_get_flags(format, cylva);
        printf("test\n");
        ft_print_struct(cylva);

}

void    ft_get_flags(char **format, t_args *cylva)
{
    while (**format && ft_str_index("#+- 0", **format) != -1)
    {
        if (**format == '#' && cylva->f_diese == 0)
            cylva->f_diese = 1;
        if (**format == '0' && cylva->f_moins == 0)
            cylva->f_zero = 1;
        if (**format == '-')
            cylva->f_moins = 1;
        if (**format == ' ' && cylva->f_plus == 0)
            cylva->f_space = 1;
        if (**format == '+')
            cylva->f_plus = 1;
        (*format)++;
    }
}

int     ft_str_index(char *str, char c)
{
    int     i;

    i = 0;
    if (str == NULL)
        return (-1);
    while (str[i])
    {
        if (str[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

void ft_print_struct(t_args *cylva)
{
    printf("len_print = %d, f_diese = %d, f_plus = %d, f_moins = %d, f_space = %d, f_zero = %d\n", cylva->len_print, cylva->f_diese, cylva->f_plus, cylva->f_moins, cylva->f_space, cylva->f_zero);
}
