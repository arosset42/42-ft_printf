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
# include "libft/includes/libft.h"

typedef struct  s_args
{
	int			len_print;
	int         precision;
}				t_args;

int		ft_printf(char *format, ...);
void  	ft_printf_init(char **format, t_args *cylva);
int		ft_str_len_print(const char *str, char c);
int		ft_strchr_len(const char *str, char c);
void	ft_init_struct(t_args *cylva);

#endif
