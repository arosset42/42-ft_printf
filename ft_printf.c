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

int		ft_printf(const char *format, ...)
{
	va_list		va;
	t_args 		cylva;
	char		*fmt;

	fmt = ft_strdup(format);
	va_start(va, format);
	cylva.len_print = 0;
	while (*fmt)
	{
		ft_printf_init(&fmt, &cylva);
		ft_get_tag(&fmt, &cylva);
	//	ft_print_struct(&cylva);
		if (ft_str_index("sSpdDioOuUxXcC%", *fmt) != -1)
		{
			fmt++;

			ft_convert(va, &cylva);
		}
	 	//sleep(1);
	}
	va_end(va);
	// ft_strdel(&fmt);
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
	cylva->precision = -1;
	cylva->base = 0;
	cylva->m_lenght = '0';
	cylva->operation = '0';
	cylva->wchar = '0';
	cylva->wstr = 0;
	cylva->c = 0;
	cylva->str = "0";
}
