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
	// int			ret;

	va_start(va, format);
	ft_init_struct(&cylva);
	while (*format)
	{
		ft_printf_init(&format, &cylva);

	}
	va_end(va);
	// ret = cylva.len_print;
	return (cylva.len_print);
}

void  	ft_printf_init(char **format, t_args *cylva)
{
	cylva->len_print += ft_str_len_print(*format, '%');
	(*format) += ft_strchr_len(*format, '%');
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

	cylva->len_print = 0;
}
