/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 10:57:02 by arosset           #+#    #+#             */
/*   Updated: 2016/12/19 10:57:05 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(char *format, ...)
{
	va_list		va;
	t_args 		cylva;
	int			stop;

	stop = 0;
	va_start(va, format);
	cylva.len_print = 0;
	while (*format && stop != 1)
	{
		ft_printf_init(&format, &cylva);
		ft_get_tag(&format, &cylva);
			ft_putstr("\nformat restant = ");
			ft_putstr(format);
			ft_putchar('\n');
			stop = 1;
	}
	va_end(va);
	return (cylva.len_print);
}

void  	ft_printf_init(char **format, t_args *cylva)
{
	cylva->len_print += ft_str_len_print(*format, '%');
	(*format) += ft_strchr_len(*format, '%');
	ft_init_struct(cylva);
}

int		ft_str_len_print(const char *str, char c)
{
	int		len;

	len = ft_strchr_len(str, c);
	write(1, str, len);
	return (len);
}

int		ft_strchr_len(const char *str, char c)
{
	int 	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

void 	ft_init_struct(t_args *cylva)
{
	cylva->f_diese = 0;
	cylva->f_plus = 0;
	cylva->f_moins = 0;
	cylva->f_space = 0;
	cylva->f_zero = 0;
	cylva->width = 0;
	cylva->precision = 0;
	cylva->base = 0;
}
