/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 21:33:21 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/05 21:45:10 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//return"(null)"porque el printf original imprime (null) cuando recibe un
//puntero nulo con %s
int	ft_putstr(char *str, size_t *counter)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		if (ft_putchar(*str, counter) == -1)
			return (-1);
		str++;
	}
	return ((int)*counter);
}
