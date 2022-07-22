/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_integer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:34 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/22 15:44:14 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_cast_integer(t_format *input)
{
	int		nbr;
	char	*str_nbr;

	nbr = va_arg(input->arg, int);
	str_nbr = ft_itoa(nbr);
	input->size += write(1, str_nbr, ft_strlen(str_nbr));
	free(str_nbr);
}
