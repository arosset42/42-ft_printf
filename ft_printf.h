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

typedef struct		s_param
{
    char            *type;
    char            *content;
	struct s_param	*next;
	struct s_param	*prev;
}					t_param;

int		ft_printf(const char *format, ...);

#endif
