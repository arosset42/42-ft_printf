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

t_param		*ft_list_new_param(char const *content, char const *type)
{
	t_param		*new;
	size_t		size_content;
	size_t		size_type;

	size_content = ft_strlen(content);
	size_type = ft_strlen(type);
	new = (t_param *)malloc(sizeof(t_param));
	if (new == NULL)
		return (NULL);
	new->content = malloc(size_content);
	new->type = malloc(size_type);
	if (content == NULL || type == NULL)
		return (NULL);
	ft_memcpy(new->content, content, size_content)
	ft_memcpy(new->type, type, size_type)
	new->next = NULL;
	return (new);
}


int		ft_printf(const char *format, ...)
{
	va_list		va;
	t_param		*param;

	param = ft_recup_param(format);



	va_end(va);
	return (0);
}

int		main(void)
{
	ft_printf("coucou%d", 5, 6);
	return (0);
}
