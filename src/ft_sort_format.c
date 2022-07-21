/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:27:59 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/21 21:23:50 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_check_parse(t_flag flag);

/* Analyse bonus flags combinations
			and then type cast with specifier */
void	ft_sort_format(t_format *input, t_flag flag)
{
	input->index++;
	while (!ft_strchr(SPECIFIERS, input->format[input->index]))
	{
		if (input->format[input->index] == '#')
			flag.hashtag = TRUE;
		else if (input->format[input->index] == ' ')
			flag.space = TRUE;
		else if (input->format[input->index] == '+')
			flag.sign = TRUE;
		input->index++;
	}
	flag.spec = input->format[input->index];
	ft_check_parse(flag);
	ft_type_cast(input, flag);
	ft_reset_flag(&flag);
}

static void	ft_check_parse(t_flag flag)
{
	if (flag.hashtag == TRUE)
	{
		if ((flag.spec != 'x' || flag.spec != 'X')
			|| (flag.sign == TRUE || flag.space == TRUE))
		flag.error = TRUE;
	}
	if (flag.sign == TRUE && flag.space == TRUE)
		flag.space = FALSE;
}
