/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:46:27 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 23:24:45 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_base_digit(unsigned long nbr, size_t base);

char	*ft_utoa_base(unsigned long nbr, char *base)
{
	int		len_base;
	int		len_str;
	char	*str;

	if (!base)
		return (NULL);
	len_base = ft_strlen(base);
	len_str = count_base_digit(nbr, len_base);
	str = ft_calloc(len_str + 1, sizeof(*str));
	while (len_str > 0)
	{
		str[len_str - 1] = base[nbr % len_base];
		nbr /= len_base;
		len_str--;
	}
	return (str);
}

static size_t	count_base_digit(unsigned long nbr, size_t base)
{
	size_t	i;

	i = 1;
	while (nbr >= base)
	{
		nbr /= base;
		i++;
	}	
	return (i);
}
