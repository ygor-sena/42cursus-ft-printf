/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:45 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 23:01:26 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_cast_unsigned(t_format *input, size_t *index)
{
	unsigned int	nbr;
	char			*str_nbr;

	nbr = va_arg(input->arg, unsigned int);
	str_nbr = ft_utoa_base(nbr, DECIMAL_BASE);
	ft_putstr_fd(str_nbr, 1);
	input->size += ft_strlen(str_nbr);
	*index += 2;
	free(str_nbr);
}
