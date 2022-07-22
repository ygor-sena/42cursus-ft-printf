/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:19:52 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/22 15:47:39 by yde-goes         ###   ########.fr       */
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
