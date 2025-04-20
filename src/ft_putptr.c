/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:15:31 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/04/19 14:46:06 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *s)
{
	if (!s)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_puthex((unsigned long)s, 0));
}
