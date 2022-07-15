/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:19:52 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 01:20:06 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_format	*ft_instance_format(va_list arg, const char *format)
{
	t_format	*input;

	input = malloc(sizeof(t_format));
	if (!input)
		return (NULL);
	va_copy(input->arg, arg);
	input->format = format;
	input->size = 0;
	input->index = 0;
	return (input);
}

t_flag	*ft_instance_flag(void)
{
	t_flag	*specs;

	specs = malloc(sizeof(t_flag));
	if (!specs)
		return (NULL);
	specs->padding = FALSE;
	specs->precision = FALSE;
	specs->left_just = FALSE;
	specs->hashtag = FALSE;
	specs->sign = FALSE;
	specs->space = FALSE;
	return (specs);
}
