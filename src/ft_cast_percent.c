/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:37 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 01:20:58 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_cast_percent(t_format *input, size_t *index)
{
	int	p;

	p = va_arg(input->arg, int);
	ft_putchar_fd('%', 1);
	*index += 1;
	input->size += 1;
}
