/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_integer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:34 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/20 23:44:19 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_cast_integer(t_format *input, t_flag *flag)
{
	int		nbr;
	char	*str_nbr;

	nbr = va_arg(input->arg, int);
	if (flag->sign == TRUE && nbr >= 0)
		input->size += write(1, PLUS_SIGN, 1);
	str_nbr = ft_itoa(nbr);
	input->size += write(1, str_nbr, ft_strlen(str_nbr));
	ft_free((void **) &str_nbr, NULL);
}
