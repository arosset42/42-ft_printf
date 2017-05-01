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

# define S_OPE cylva->operation
# define S_M_LEN cylva->m_lenght

typedef struct  s_args
{
	char		f_diese;
	char		f_plus;
	char		f_moins;
	char		f_space;
	char		f_zero;

	int			len_print;
	int			width;
	int			precision;
	int			base;

	char		m_lenght;
	char		operation;

	wchar_t		wchar;
	wchar_t		*wstr;
	int			c;
	char		*str;
}				t_args;

int		ft_printf(const char *format, ...);
void  	ft_printf_init(char **format, t_args *cylva);

int		ft_str_len_print(const char *str, char c);
int		ft_strchr_len(const char *str, char c);

void	ft_init_struct(t_args *cylva);

void 	ft_get_tag(char **format, t_args *cylva);
void    ft_get_flags(char **format, t_args *cylva);
void    ft_get_precision(char **format, t_args *cylva);
void	ft_get_length(char **fmt, t_args *cylva);

void 	ft_error_double_f(char **format, t_args *cylva);

int     ft_str_index(char *str, char c);

int		nblen(long long int value, int base);
char	*ft_itoa_base(long long int value, int base);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s1);
int		ft_isdigit(int c);
void	ft_strdel(char **as);

void    ft_convert(va_list ap, t_args *cylva);

void 	ft_print_struct(t_args *cylva);
void 	ft_putstr(const char *s);
void 	ft_putchar(char c);
#endif
