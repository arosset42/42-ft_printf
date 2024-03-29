/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 18:28:32 by arosset           #+#    #+#             */
/*   Updated: 2017/05/10 18:28:46 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_power(int n, int pow)
{
	if (pow <= 0)
		return (1);
	else if (pow == 1)
		return (n);
	else
		return (n * ft_power(n, pow - 1));
}
