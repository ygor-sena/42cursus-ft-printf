/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:25:40 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 22:53:57 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_cast_char(t_format *input, size_t *index)
{
	int	c;

	c = va_arg(input->arg, int);
	ft_putchar_fd(c, 1);
	input->size += 1;
	*index += 2;
}
