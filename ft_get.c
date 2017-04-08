#include "ft_printf.h"

void 	ft_get_tag(char **format, t_args *cylva)
{
		(*format)++;
		ft_get_flags(format, cylva);
        if (ft_isdigit(**format))
        {
            cylva->width = ft_atoi(*format);
            *format += nblen(cylva->width, 10);
        }
        ft_get_precision(format, cylva);
        ft_get_length(format, cylva);
        printf("test\n");
        ft_print_struct(cylva);

}

void	ft_get_length(char **fmt, t_args *cylva)
{
	while (**fmt && ft_str_index("hjzl", **fmt) != -1)
	{
		if (**fmt == *(*fmt + 1) || *(*fmt + 1) == 'h')
		{
			if (**fmt == 'h' || **fmt == 'l')
				cylva->m_lenght = **fmt - 32;
			else
				cylva->m_lenght = 'L';
			(*fmt)++;
		}
		else
			cylva->m_lenght = **fmt;
		(*fmt)++;
	}
}

void    ft_get_precision(char **format, t_args *cylva)
{
    if (**format == '.')
	{
		while (**format == '.')
			(*format)++;
		if (ft_isdigit(*(*(format))))
		{
			cylva->precision = ft_atoi(*(format));
			*format += nblen(cylva->precision, 10);
		}
	}
	else
		cylva->precision = -1;
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
    printf("\n\n width = %d, precision = %d, base = %d\n\n", cylva->width, cylva->precision, cylva->base);
    printf("m_lenght = %c\n", cylva->m_lenght);
}
