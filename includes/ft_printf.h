/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 23:56:19 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 00:36:13 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;

typedef struct s_format
{
	va_list		arg;
	const char	*format;
	size_t		size;
	size_t		index;
}	t_format;

typedef struct s_flag
{
	t_bool	padding;
	t_bool	precision;
	t_bool	left_just;
	t_bool	hashtag;
	t_bool	sign;
	t_bool	space;
}	t_flag;

int			ft_printf(const char *format, ...);

t_format	*ft_instance_format(va_list arg, const char *format);
t_flag		*ft_instance_flag(void);
void		ft_sort_format(t_format *input);
void		ft_type_cast(t_format *input);

void		ft_cast_char(t_format *input, size_t *index);
void		ft_cast_percent(t_format *input, size_t *index);
void		ft_cast_string(t_format *input, size_t *index);
void		ft_cast_pointer(t_format *input, size_t *index);
void		ft_cast_unsigned(t_format *input, size_t *index);
void		ft_cast_integer(t_format *input, size_t *index);
void		ft_cast_hexa(t_format *input, size_t *index);
#endif
