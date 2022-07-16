/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:30 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/16 03:42:50 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_cast_hexa(t_format *input, size_t *index)
{
	unsigned int	nbr;
	char			*str_nbr;

	nbr = va_arg(input->arg, unsigned int);
	if (input->format[input->index + 1] == 'x')
		str_nbr = ft_utoa_base(nbr, LOW_HEX_BASE);
	else
		str_nbr = ft_utoa_base(nbr, UP_HEX_BASE);
	ft_putstr_fd(str_nbr, 1);
	input->size += ft_strlen(str_nbr);
	*index += 2;
	ft_free((void **) &str_nbr, NULL);
}
