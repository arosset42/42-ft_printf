/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 16:59:45 by arosset           #+#    #+#             */
/*   Updated: 2017/01/23 16:59:49 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_s_S_convert(va_list arg, const char *format)
{
    char    *str;
    int     ret;

    str = va_arg(arg, char *);
    ft_putstr(format);
    ft_putstr(str);

    ret = (ft_strlen(format) + ft_strlen(str));
    return (ret);
}
