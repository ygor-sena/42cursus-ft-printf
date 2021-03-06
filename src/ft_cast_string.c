/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:42 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/21 21:46:09 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_cast_string(t_format *input)
{
	char	*str;

	str = va_arg(input->arg, char *);
	if (!str)
		str = NULL_STR;
	input->size += write(1, str, ft_strlen(str));
}
