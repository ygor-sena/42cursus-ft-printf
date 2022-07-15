/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:42 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 22:54:48 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_cast_string(t_format *input, size_t *index)
{
	char	*str;

	str = va_arg(input->arg, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	input->size += ft_strlen(str);
	*index += 2;
}
