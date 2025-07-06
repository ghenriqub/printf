/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:54:47 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/20 19:22:10 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char s, va_list args)
{
	if (s == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (s == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (s == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (s == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (s == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	else if (s == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, s);
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
			count += ft_check(s[++i], args);
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}


int	main(void)
{
	int		d = 28;
	char	*s = "Gabriel";
	int		*ptr = &d;

	// // std test
	printf("My name is %s and I'm %d years old.\n", s, d);
	ft_printf("My name is %s and I'm %d years old.\n", s, d);

	// // unsigned int test
	printf("Unsigned: %u\n", 4294967295u);
	ft_printf("Unsigned: %u\n", 4294967295u);

	// // hex lowercase
	printf("Hex lowercase: %x\n", 305441741);
	ft_printf("Hex lowercase: %x\n", 305441741);

	// // hex uppercase
	printf("Hex uppercase: %X\n", 305441741);
	ft_printf("Hex uppercase: %X\n", 305441741);

	// // pointer test
	printf("Pointer test: %p\n", ptr);
	ft_printf("Pointer test: %p\n", ptr);
	
	// NULL test
	int lena = printf(NULL);
	int lenb = ft_printf(NULL);
	
	printf("%d", lena);
	printf("%d", lenb);

	return (0);
}

