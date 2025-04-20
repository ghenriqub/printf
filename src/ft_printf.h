/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:09:27 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/19 14:43:17 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// malloc, free:
# include <stdlib.h>

// write:
# include <unistd.h>

// variadic functions:
# include <stdarg.h>

// tests:
# include <stdio.h>

int	ft_printf(const char *f, ...);
int	ft_puthex(unsigned long int n, int upper);
int	ft_putnbr(long int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putptr(void *s);

#endif
