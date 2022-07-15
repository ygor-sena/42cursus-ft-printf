/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_cast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:43:50 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 22:51:35 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_type_cast(t_format *input)
{
	if (input->format[input->index + 1] == 'c')
		ft_cast_char(input, &input->index);
	else if (input->format[input->index + 1] == '%')
		ft_cast_percent(input, &input->index);
	else if (input->format[input->index + 1] == 's')
		ft_cast_string(input, &input->index);
	else if (input->format[input->index + 1] == 'p')
		ft_cast_pointer(input, &input->index);
	else if (input->format[input->index + 1] == 'u')
		ft_cast_unsigned(input, &input->index);
	else if (input->format[input->index + 1] == 'd'
		|| input->format[input->index + 1] == 'i')
		ft_cast_integer(input, &input->index);
	else if (input->format[input->index + 1] == 'x'
		|| input->format[input->index + 1] == 'X')
		ft_cast_hexa(input, &input->index);
}
