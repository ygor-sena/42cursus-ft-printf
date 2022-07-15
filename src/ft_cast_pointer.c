/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:39 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 23:24:27 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_cast_pointer(t_format *input, size_t *index)
{
	unsigned long	nbr;
	char			*str_nbr;

	nbr = va_arg(input->arg, unsigned long);
	if (!nbr)
	{
		str_nbr = "(nil)";
		ft_putstr_fd(str_nbr, 1);
		input->size += ft_strlen(str_nbr);
		*index += 2;
		return ;
	}
	else
	{
		str_nbr = ft_utoa_base(nbr, LOW_HEX_BASE);
		ft_putstr_fd(PTR_PREFIX, 1);
		ft_putstr_fd(str_nbr, 1);
		input->size += ft_strlen(str_nbr) + 2;
		*index += 2;
		free(str_nbr);
	}
}
