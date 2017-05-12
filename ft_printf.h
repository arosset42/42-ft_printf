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
# define S_PREC cylva->precision
# define S_MOINS cylva->f_moins
# define S_ZERO cylva->f_zero
# define S_DIESE cylva->f_diese
# define S_SPACE cylva->f_space
# define S_PLUS cylva->f_plus
# define BIGGER(x, y) ((x > y) ? x : y)

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

int				ft_printf(const char *format, ...);
void  			ft_printf_init(char **format, t_args *cylva);

int				ft_str_len_print(const char *str, char c);
int				ft_strchr_len(const char *str, char c);

void			ft_init_struct(t_args *cylva);

void 			ft_get_tag(char **format, t_args *cylva);
void    		ft_get_flags(char **format, t_args *cylva);
void    		ft_get_precision(char **format, t_args *cylva);
void			ft_get_length(char **fmt, t_args *cylva);
void 			ft_set_base(t_args *cylva);

void 			ft_error_double_f(char **format, t_args *cylva);

int 		    ft_str_index(char *str, char c);

int				ft_wstrlen(wchar_t *ws, int max);
int				nblen(long long int value, int base);
int				unblen(unsigned long long int value, int base);
int				ft_power(int n, int pow);
char			*ft_itoa_base(long long int value, int base);
char			*ft_uitoa_base(unsigned long long int value, int base);
int				ft_atoi(const char *str);
char			*ft_strdup(const char *s1);
int				ft_isdigit(int c);
int				ft_isupper(int c);
void			ft_strdel(char **as);
void			ft_memdel(void **ap);

void    		ft_convert(va_list ap, t_args *cylva);
long long int   ft_convert_nb(va_list ap, t_args *cylva);
long long int   ft_convert_uint(va_list ap, t_args *cylva);
long long int   ft_convert_int(va_list ap, t_args *cylva);

void 			ft_print_struct(t_args *cylva);

void    		ft_print_str(t_args *cylva);
void			ft_print_nbr(t_args *cylva, long long int nbr);
void    		ft_print_arg_nbr(t_args *cylva, int max, long long int nbr);
void    		ft_print_base(t_args *cylva, long long int nbr);

void 			ft_putstr(const char *s);
void 			ft_putchar(char c);
void			ft_put_len_str(char const *s, int len);
void			ft_put_n_char(char c, int n);
void    		ft_putwchar(wchar_t wc);
void			ft_putwstr(wchar_t *ws, int len);

int				ft_len_print_str(t_args *cylva);
int				ft_str_max_print(t_args *cylva);
int				ft_nbr_max_print(long long int nbr, t_args *cylva);


#endif
