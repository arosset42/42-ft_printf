/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_str_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 15:30:44 by arosset           #+#    #+#             */
/*   Updated: 2017/05/09 15:31:02 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_str_max_print(t_args *cylva)
{
	int	max;

	max = 0;
	// printf("m_lenght = %c, ope = %c\n", cylva->m_lenght, S_OPE);
	if (S_OPE == 's' && S_M_LEN == '0')
		max = ft_strlen(cylva->str);
	else if (S_OPE == 'S' || (S_M_LEN == 'l' && S_OPE == 's'))
	{
		// ft_putchar('B');
		max = ft_wstrlen(cylva->wstr, cylva->precision);
	}
	else if (S_OPE == 'c' && !S_M_LEN)
	{
		// ft_putchar('C');
		max = 1;
	}
	else
	{
		// ft_putchar('D');
		if (cylva->wchar <= 0x7F)
			max = 1;
		else if (cylva->wchar <= 0x7FF)
			max = 2;
		else if (cylva->wchar <= 0xFFFF)
			max = 3;
		else
			max = 4;
	}
	if (cylva->precision >= 0 && S_OPE != 'c' && S_OPE != 'C')
		return (max > cylva->precision ? cylva->precision : max);
	else
		return (max);
}
