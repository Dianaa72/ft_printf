/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:04:29 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/05 22:16:37 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num, size_t *counter)
{
	if (num == -2147483648)
	{
		ft_putnbr((num / 10), counter);
		ft_putchar('8', counter);
	}

	return ((int)*counter);
}
