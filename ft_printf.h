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
# include "Support/libft/includes/libft.h"

# include <stdio.h>

typedef struct  s_args
{
	int			len_print;
	int			f_diese;
	int			f_plus;
	int			f_moins;
	int			f_space;
	int			f_zero;
	int			width;
	int			precision;
	int			base;
	char		m_lenght;

}				t_args;

int		ft_printf(char *format, ...);
void  	ft_printf_init(char **format, t_args *cylva);

int		ft_str_len_print(const char *str, char c);
int		ft_strchr_len(const char *str, char c);

void	ft_init_struct(t_args *cylva);

void 	ft_get_tag(char **format, t_args *cylva);
void    ft_get_flags(char **format, t_args *cylva);
void    ft_get_precision(char **format, t_args *cylva);
void	ft_get_length(char **fmt, t_args *cylva);

int     ft_str_index(char *str, char c);

int		nblen(long long int value, int base);
char	*ft_itoa_base(long long int value, int base);
int		ft_atoi(const char *str);
void 	ft_print_struct(t_args *cylva);

#endif
