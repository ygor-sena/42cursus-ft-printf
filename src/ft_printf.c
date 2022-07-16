/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 23:08:19 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/16 03:43:40 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_vfprintf(va_list arg, const char *format);

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		length;

	length = 0;
	if (!format)
		return (0);
	va_start(arg, format);
	length = ft_vfprintf(arg, format);
	va_end(arg);
	return (length);
}

static int	ft_vfprintf(va_list arg, const char *format)
{
	t_format	*input;
	size_t		length;

	input = ft_instance_format(arg, format);
	if (!input)
		return (0);
	length = 0;
	while (input->format[input->index])
	{
		if (input->format[input->index] == '%')
		{
			ft_sort_format(input);
		}
		else
		{
			input->size += write(1, &input->format[input->index], 1);
			input->index++;
		}
	}
	length = input->size;
	ft_free((void **) &input, NULL);
	return (length);
}
