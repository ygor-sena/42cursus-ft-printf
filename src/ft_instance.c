/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:19:52 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/25 00:24:58 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_format	ft_instance_format(va_list arg, const char *format)
{
	t_format	input;

	va_copy(input.arg, arg);
	input.format = format;
	input.size = 0;
	input.index = 0;
	return (input);
}

t_print	*ft_list_placeholder(void)
{
	static t_print	holder[128] = {NULL};

	return (holder);
}

void	ft_instance_printer(void)
{
	t_print	*types;

	types = ft_list_placeholder();
	types['c'] = ft_cast_char;
	types['s'] = ft_cast_string;
	types['p'] = ft_cast_pointer;
	types['d'] = ft_cast_integer;
	types['i'] = ft_cast_integer;
	types['u'] = ft_cast_unsigned;
	types['x'] = ft_cast_hexa;
	types['X'] = ft_cast_hexa;
	types['%'] = ft_cast_percent;
}
