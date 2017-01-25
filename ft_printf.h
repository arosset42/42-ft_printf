/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 10:56:50 by arosset           #+#    #+#             */
/*   Updated: 2016/12/19 10:56:54 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

/*
**      ft_printf.c
*/
int		ft_printf(const char *format, ...);

/*
**      ft_string.c
*/
int     ft_s_S_convert(va_list arg, const char *format);

#endif
