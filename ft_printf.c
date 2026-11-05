/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 20:09:01 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/05 21:23:36 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(va, int), counter));
	else if (*str == 's')
		return (ft_putstr(va_arg(va, char *), counter));
	else if (*str == 'p')
		return (ft_putvoidhexa(va_arg(va, void *), counter));
	else if (*str == 'i' || *str == 'd')
		return (ft_putnbr(va_arg(va, int), counter));
	else if (*str == 'u')
		return (ft_putunbr(va_arg(va, unsigned int), counter));
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			return (ft_puthex(va_arg(va, unsigned int),
					counter, HEX_LOW_BASE));
		else
			return (ft_puthex(va_arg(va, unsigned int),
					counter, HEX_UPP_BASE));
	}
	else if (*str == '%')
		return (ft_putchar(*str, counter));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	va;
	size_t	counter;

	if (!str)
		return (-1);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &counter);
		}
		else
			ft_putchar(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}
