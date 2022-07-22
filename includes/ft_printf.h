/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 23:56:19 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/22 15:47:56 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DECIMAL_BASE "0123456789"
# define UP_HEX_BASE "0123456789ABCDEF"
# define LOW_HEX_BASE "0123456789abcdef"
# define SPECIFIERS "cspdiuxX%"
# define PERCENT_SIGN "%"
# define UP_HEX_PREFIX "0X"
# define LOW_HEX_PREFIX "0x"
# define NULL_PTR "(nil)"
# define NULL_STR "(null)"

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

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

int			ft_printf(const char *format, ...);

t_format	ft_instance_format(va_list arg, const char *format);

void		ft_sort_format(t_format *input);
void		ft_type_cast(t_format *input);

void		ft_cast_char(t_format *input);
void		ft_cast_percent(t_format *input);
void		ft_cast_string(t_format *input);
void		ft_cast_pointer(t_format *input);
void		ft_cast_unsigned(t_format *input);
void		ft_cast_integer(t_format *input);
void		ft_cast_hexa(t_format *input);
#endif
