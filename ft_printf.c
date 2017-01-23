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

int		ft_chr_param(char param)
{
	if (param == '%')
		return (6);
	else if (param == 's'|| param == 'S')
		return (1);
	else if (param == 'p')
	 	return (2);
	else if (param == 'D' || param == 'd' || param == 'i')
		return (3);
	else if (param == 'o' || param == 'O' || param == 'u' || param == 'U' \
				param == 'x' || param == 'X')
		return (4);
	else if (param == 'c' || param == 'C')
		return (5);
	else if (ft_isdigit(param) == 1 || param == '.' || param == '#' || \
	 			param == '+' || param == '-' || param == 'h'\
				param == 'l' || param == 'j' || param == 'z' || param == ' ')
		return (0);
	else
		return (-1);

}

int		ft_check_param(va_list arg, const char *format)
{
	char	*chr;
	int 	i;
	int		ref;
	int 	ret;

	chr = ft_strchr(format, '%');
	i = 0;
	ref = ft_chr_param(chr[i]);
	while (ref == 0)
	{
		i++;
		ref = ft_chr_param(chr[i])
	}
	if (ref == 1)
		ret = ft_string_param();
	else if (ref == 2)
		ret = ft_pointeur_param();
	else if (ref == 3)
		ret = ft_int_param();
	else if (ref == 4)
		ret == ft_unsigned_int_param();
	else if (ref == 5)
		ret == ft_char_param();
	else if (ref == 6)
		ret == ft_cent_param();
	else
		return (-1);
	return (ret);
}

int		ft_printf(const char *format, ...)
{
	va_list		arg;
	int			ret;

	va_start(arg, format);
	//ft_putendl("va start");
	ret = ft_check_param(arg);
	va_end(arg);
	return (ret);
}
