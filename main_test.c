/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 10:57:12 by arosset           #+#    #+#             */
/*   Updated: 2016/12/19 10:57:14 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <locale.h>
# include "Support/libft/includes/libft.h"

// int		main(void)
// {
// 	int d;
// 	int c;
// 	char* l = setlocale(LC_ALL, "");
// 	if (l == NULL)
// 		printf("locale not set\n\n");
// 	else
// 		printf("set %s\n\n", l);
// /*
// **	S
// */
// 	if (1)
// 	{
// 		wchar_t *str_unicode;
//
// 		str_unicode = L"⾹⾵⽲Ѥ";
//
// 		printf("UNICODE : \n");
// 		d = ft_printf("ft_printf : %S\n", str_unicode);
// 		c = printf("printf : %S\n", str_unicode);
// 		if (d != c)
// 		{
// 			printf("\033[31m 	---- Error ----\n");
// 			printf("ret ft_printf : %d != %d : ret printf\n\033[37m", d, c);
// 		}
// 		else
// 		{
// 			printf("\033[32m 	---- OK ----\n");
// 			printf("ret ft_printf : %d == ret printf : %d\n\033[37m", d, c);
// 		}
// 	}
// /*
// **	s
// */
// 	if (1)
// 	{
// 		char	*str;
//
// 		str = "coucou";
// 		printf("STRING : \n");
// 		d = ft_printf("ft_printf : %s\n", str);
// 		c = printf("printf : %s\n", str);
// 		if (d != c)
// 		{
// 			printf("\033[31m 	---- Error ----\n");
// 			printf("ret ft_printf : %d != %d : ret printf\n\033[37m", d, c);
// 		}
// 		else
// 		{
// 			printf("\033[32m 	---- OK ----\n");
// 			printf("ret ft_printf : %d == ret printf : %d\n\033[37m", d, c);
// 		}
// 	}
// 	return (0);
// }

int		main(void)
{
	char* l = setlocale(LC_ALL, "");
	if (l == NULL)
		printf("locale not set\n\n");

	int 			ret;

	int				nbr2;
	int				nbr;
	unsigned int	unbr;
	short 			test;

	char			*str;
	char			*str2;

	char 			c;
	char 			b;

	unsigned long 	testtest;

	void 			*vide;
	wchar_t			wc;
	wchar_t			*wstr;

	nbr2 = 50;
	nbr = 42;
	unbr = 4;
	test = 5;

	str = "COUCOU";
	str2 = "ALLO";

	c = 'a';
	b = ':';

	testtest = 50;

	wc = L'⾹';
	wstr = L"⾹⾵⽲Ѥ";
	vide = "cdtt";

	// ret = ft_printf("%s is a string %c %s\n", "this", b, str);
	// ft_putnbr(ret);
	// ft_putchar('\n');
	ret = ft_printf("test %s\n", "coucou");
	ft_putchar('\n');
	ft_putnbr(ret);
	ft_putchar('\n');
	// ret = printf("test %p", vide);
	// ft_putchar('\n');
	// ft_putnbr(ret);
	// ft_putchar('\n');

	// printf("\nret = %d\n", ret);
	// ret = printf("coucou %c\n", c);
	// printf("\nret = %d\n", ret);
   // ft_printf("4567 |%-10]5d| plip\n", 12);
   // ft_printf("4567 |%10]5d| plip\n", 12);
   // ft_printf("|%10.5d|\n", -12);
   // ft_printf("|%10d|\n", -12);
   // ft_printf("|%010d|\n", -12);
   // ft_printf("|%-10.5d|\n", 12);
   // ft_printf("|%-010.5d|\n", -12);
	return (0);
}


void ft_print_struct(t_args *cylva)
{
	ft_putstr("\n===== STRUCTURE =====");
	ft_putstr("\nFLAG #-+ 0\n");
	ft_putstr("\nf_diese = ");
	ft_putchar(cylva->f_diese);
	ft_putstr("\nf_pl_sp = ");
	ft_putchar(cylva->f_pl_sp);
	ft_putstr("\nf_mo_ze = ");
	ft_putchar(cylva->f_mo_ze);



	ft_putstr("\nlen_print = ");
	ft_putnbr(cylva->len_print);
	ft_putstr("\nwidth = ");
	ft_putnbr(cylva->width);
	ft_putstr("\nprecision = ");
	ft_putnbr(cylva->precision);
	ft_putstr("\nbase = ");
	ft_putnbr(cylva->base);

	ft_putstr("\nm_lenght = ");
	ft_putchar(cylva->m_lenght);
	ft_putstr("\noperation = ");
	ft_putchar(cylva->operation);

	ft_putstr("\n==== END ====\n");
}
