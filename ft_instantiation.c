/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instantiation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:19:52 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/14 00:42:10 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_format	*ft_instance_format(va_list arg, const char *format)
{
	t_format	*input;

	input = malloc(sizeof(t_format));
	if (!input)
		return (NULL);
	va_copy(input->arg, arg);
	input->format = format;
	input->size = 0;
	return (input);
}
