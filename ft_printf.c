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

/*
**	1 => char *
**	2 => void *
**	3 => int
**	4 => unsigned int
**	5 => char
**	6 => %
*/
int		ft_select_type(char param)
{
	if (param == '%')
		return (6);
	else if (param == 's'|| param == 'S')
		return (1);
	else if (param == 'p')
	 	return (2);
	else if (param == 'D' || param == 'd' || param == 'i')
		return (3);
	else if (param == 'o' || param == 'O' || param == 'u' || param == 'U' ||
				param == 'x' || param == 'X')
		return (4);
	else if (param == 'c' || param == 'C')
		return (5);
	else if (ft_isdigit(param) == 1 || param == '.' || param == '#' ||
	 			param == '+' || param == '-' || param == 'h' ||
				param == 'l' || param == 'j' || param == 'z' || param == ' ')
		return (0);
	else
		return (-1);
}

int		ft_select_flag(int type, va_list *args, const char *format)
{
	int		ret;
	ret = 0;
	ft_putstr("type = ");
	ft_putnbr(type);
	ft_putendl("");
	if (type == 1)
		ret = ft_s_S_convert(&args, format);
	return (ret);
}

int		ft_check_param(va_list *args, const char *format, size_t i)
{
	char	*next_arg;

	next_arg = ft_strchr(format, '%');
	if (*format == '\0')
		return (i);
	if (next_arg == NULL)
	{
		ft_putstr(format);
		return (i + ft_strlen(format));
	}
	else if ()
	{

	}
}

int		ft_printf(const char *format, ...)
{
	va_list		args;
	int			ret;

	va_start(args, format);
	ft_putendl("\033[31mSTART fonction printf\033[0m");
	ret = ft_check_param(&args, format, 0);
	va_end(args);
	ft_putendl("\n\033[32mEND fonction printf\033[0m");
	ft_putstr("\033[35mvaleur ret = ");
	ft_putnbr(ret);
	ft_putstr("\n\033[0m");
	return (ret);
}

int		main(void)
{
	char *str;
	char *strr;

	str = "42";
	strr = "coucou";
	ft_printf("salut %s et %s", str, strr);
	return (0);
}
