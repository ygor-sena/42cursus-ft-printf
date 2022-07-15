/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 23:08:19 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 01:19:48 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_vfprintf(va_list arg, const char *format);

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		size;

	size = 0;
	if (!format)
		return (0);
	va_start(arg, format);
	size = ft_vfprintf(arg, format);
	va_end(arg);
	return (size);
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
		}
		input->index++;
	}
	length = input->size;
	free(input);
	return (length);
}
