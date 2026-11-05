/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 20:42:19 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/05 21:10:28 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//if write ejecuta tmb la funcion write y aparte verifica si el result es -1
int	ft_putchar(char c, size_t *counter)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	else
		(*counter)++;
	return (1);
}
