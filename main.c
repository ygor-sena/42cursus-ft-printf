/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:41:07 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/15 23:11:54 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <string.h>

int	main(void)
{
	char *str;
	int my;
	int cc;
	unsigned int a = 10;
	str = "42gyfj";
	printf("MY PRINTF:\n");
	my = ft_printf("unsigned %u", a);
	printf("\n%d\n", my);
	printf("CC PRINTF:\n");
	cc = printf("unsigned %u", a);
	printf("\n%d\n", cc);
	return (0);
}
