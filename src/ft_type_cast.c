/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_cast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:43:50 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/25 00:24:06 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_type_cast(t_format *input)
{
	t_print	*types;
	t_print	print;

	types = ft_list_placeholder();
	print = types[(unsigned)input->format[input->index]];
}
