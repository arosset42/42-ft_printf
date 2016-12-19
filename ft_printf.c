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

char	**ft_recup_param(const char *format)
{
	

}

int		ft_printf(const char *format, ...)
{
	va_list		va;
	char		**tab;

	tab = ft_recup_param(format);
	


	va_end(va);
	return (0);
}

int		main(void)
{
	ft_printf("coucou%d", 5, 6);
	return (0);
}
