/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_integer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:34 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/16 03:42:55 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_cast_integer(t_format *input, size_t *index)
{
	int		nbr;
	char	*str_nbr;

	nbr = va_arg(input->arg, int);
	str_nbr = ft_itoa(nbr);
	ft_putstr_fd(str_nbr, 1);
	input->size += ft_strlen(str_nbr);
	*index += 2;
	ft_free((void **) &str_nbr, NULL);
}
