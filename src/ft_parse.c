/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:31:06 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/21 21:52:02 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_parse_hexa(t_format *input, t_flag flag, char *str_nbr)
{	
	if (*str_nbr == '0')
		flag.hashtag = FALSE;
	else if (flag.hashtag == TRUE)
		input->size += write(1, LOW_HEX_PREFIX, 2);
	else if (flag.hashtag == TRUE)
		input->size += write(1, UP_HEX_PREFIX, 2);
}

void	ft_parse_integer(t_format *input, t_flag flag)
{
	if (flag.sign == TRUE)
		input->size += write(1, PLUS_SIGN, 1);
	else if (flag.space == TRUE)
		input->size += write(1, SPACE_SIGN, 1);
}
