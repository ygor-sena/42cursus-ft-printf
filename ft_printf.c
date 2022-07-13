/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 23:08:19 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/14 01:38:15 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
	size_t		i;

	input = ft_instance_format(arg, format);
	if (!input)
		return (0);
	i = 0;
	while (input->format[i])
	{
		if (input->format[i] == '%')
		{
			ft_checkflags(input);
			break ;
		}
		else
		{
			input->size += write(1, &input->format[i], 1);
			i++;
		}
	}
	i = input->size;
	free(input);
	return (i);
}
