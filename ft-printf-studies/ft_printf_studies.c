/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_studies.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:39:39 by yde-goes          #+#    #+#             */
/*   Updated: 2022/07/12 22:30:14 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Mandatory part:	%c
					%s
					%p
					%d and %i
					%u
					%x and %X
					%%

Bonus part:			'-0.'
					'# +'
*/

#include <stdio.h>

void	string_specifiers(void);
void	number_specifiers(void);
void	min_field_flag(void);
void	precision_flag(void);
void	justification_flag(void);
void	hashtag_flag(void);
void	plus_sign_flag(void);
void	blankspace_flag(void);
void	asterisk_flag(void);
void	other_specifiers(void);

int main(void)
{
	/*	printf("Eu gosto de %s e de %c", "muito!"); 
		Shows --> "error: more '%' conversions than data arguments 
			[-Werror,-Wformat-insufficient-args]"*/

	/* Mandatory part */
	string_specifiers();
	number_specifiers();

	/* Bonus part: Option 1 */
	min_field_flag();
	precision_flag();
	justification_flag();

	/* Bonus part: Option 2 */
	hashtag_flag();
	plus_sign_flag();
	blankspace_flag();

	/* Curiosities */
	asterisk_flag();
	other_specifiers();
	return (0);
}

void string_specifiers(void)
{
	char	str[] = "42";
	int		nbr;
	char	*ptr1 = NULL;
	char	*ptr2;
	
	ptr2 = str;
	nbr = -21;
	puts("\n\e[42m\e[1;37m Format command %p and %s \033[0m");
	printf("\tPrints ptr1 content: %s\n", ptr1);
	printf("\tPrints ptr1 address: %p\n", ptr1);
	printf("\tPrints ptr2 content: %s\n", ptr2);
	printf("\tPrints ptr2 address: %p\n", ptr2);

	puts("\n\e[42m\e[1;37m Format command %c and %% \033[0m");
	printf("\tPrints a percent: %%\n");
}

void	number_specifiers(void)
{
	int	nbr;

	nbr = -21;
	puts("\n\e[42m\e[1;37m Format command %x and %X \033[0m");
	printf("\tPrints -21 in low hexadecimal: %x\n", nbr);
	printf("\tPrints -21 in up hexadecimal: %X\n", nbr);

	puts("\n\e[42m\e[1;37m Format command %i, %d and %u \033[0m");
	printf("\tPrints integer nbr variable: %i\n", nbr);
	printf("\tPrints decimal nbr variable: %d\n", nbr);
	printf("\tPrints unsigned nbr variable: %u\n", nbr);
}

void	min_field_flag(void)
{
	int	nbr;

	nbr = 1234;
	puts("\n\e[42m\e[1;37m Mininum Field flag \033[0m");
	printf("\t'%d'\n", nbr);
	printf("\t'%06d'\n", nbr);
	printf("\t'%10d'\n", nbr);
	printf("\t'%010d'\n", nbr);
	/* 0 flag pattern is: <zero number> <bytes number> <specifier> */
}

void	precision_flag(void)
{
	puts("\n\e[42m\e[1;37m Precision flag \033[0m");

	/* If applied to float, the flag says how many 
			decimal digits is to be printed */
	printf("\t%.4f\n", 123.1234567);

	/* If applied to integer types, it says how 
		the mininum and maxinum digits of the number.
		If number is lower, then zeros are added to
		complete it.*/
	printf("\t%2.8d\n", 1000);

	/* If applied to strings, the flag shows the mininum
		and maximum length of the given string.
		If string is bigger than max, then string is truncated.
		If string is lower than min or max, then it's written
		from left to right.*/
	printf("\t'%19.15s'\n", "Esse é um teste simples.");

	printf("\t'%10.15s'\n", "Esse é um teste simples.");
	printf("\t'%.0s'\n", "Esse é um teste simples.");
}

void	justification_flag(void)
{
	puts("\n\e[42m\e[1;37m Justification flag \033[0m");
	printf("\tRight justification: '%8d'\n", 100);
	printf("\tLeft justification:  '%-8d'\n", 100);
}

void	hashtag_flag(void)
{
	int	nbr;

	nbr = -21;
	/* With specifier %x or %X, the # flag inserts
			'0x' or '0X' respectively before hex number. 
			The flag can't be used with other specifiers.*/
	puts("\n\e[42m\e[1;37m Hashtag flag \033[0m");
	printf("\tPrints 42 in #low hexadecimal: %#x\n", nbr);
	printf("\tPrints 42 in #up hexadecimal: %#X\n", nbr);
	printf("\tPrints 42 in low hexadecimal: %x\n", nbr);
	printf("\tPrints 42 in up hexadecimal: %X\n", nbr);
	printf("\t'%%x | %%#x --> %x | %#x'\n", 10, 10);
}

void	blankspace_flag(void)
{
	/* The <space> flag is reserved for the negative sign.
			If number is positive, the space is left blank. */
	puts("\n\e[42m\e[1;37m Blank space flag \033[0m");
	printf("\t'%  d'\n", -10);
	printf("\t'%    d'\n", 10);
}

void	plus_sign_flag(void)
{
	puts("\n\e[42m\e[1;37m Plus sign flag \033[0m");
	printf("\t'%+d'\n", -10);
	printf("\t'%+d'\n", 10);
}

void	asterisk_flag(void)
{
/* The min field length and precision specifiers can be
		arguments of printf() when used with '*'. Ex: */
	puts("\n\e[42m\e[1;37m Asterisk flag \033[0m");
	printf("\t'%*.*d'\n", 10, 4, 123);
	printf("\t'%*.*f'\n", 10, 4, 1234.12345);
}

void	other_specifiers(void)
{
	int				count;
	double			cientific;
	unsigned int	octal;
	
	cientific = 123456;
	octal = 422;
	puts("\n\e[42m\e[1;37m Other specifiers \033[0m");
	
	/* Counts parameter length at printf until %n */
	printf("\t%%n specifier:%n\n", &count);
	printf("\t%d\n", count);

	/* Cientific notation with lowercase 'e' */
	printf("\t%%e: %e\n", cientific);

	/* Cientific notation with uppercase 'E' */
	printf("\t%%E: %E\n", cientific);
	
	/* Decimal float point */
	printf("\t%%f: %f\n", cientific);

	/* Decimal float point */
	printf("\t%%F: %F\n", cientific);
	
	/* %g chooses the shorter output between
			%e and %f */
	printf("\t%%g: %g\n", cientific);

	/* %G chooses the shorter output between
			%E and %F */
	printf("\t%%G: %G\n", cientific);

	/* Octal number without sign */
	printf("\t%%o: %o\n", octal);
}
