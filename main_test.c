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
	int ret;
	short test;
	char	*str;

	str = "TEST";
	test = 42;
	ft_putstr("===> My ft_printf <===\n");
	ret = ft_printf("coucou %#54.62hd\n", test);
	ft_putstr("\n==> ret = ");
	ft_putnbr(ret);
	ft_putchar('\n');
	ft_putstr("\n===>    printf    <===\n");
	ret = printf("coucou %54.62hd\n", test);
	printf("==> ret = %d\n", ret);


   // intf("4567 |%-10]5d| plip\n", 12);
   // intf("4567 |%10]5d| plip\n", 12);
   // printf("|%10.5d|\n", -12);
   // printf("|%10d|\n", -12);
   // printf("|%010d|\n", -12);
   // printf("|%-10.5d|\n", -12);
   // printf("|%-010.5d|\n", -12);
	return (0);
}
