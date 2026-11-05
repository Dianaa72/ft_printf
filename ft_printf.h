/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:29:18 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/05 22:05:59 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int	ft_printf(char const *str, ...);
int	ft_putchar(char c, size_t *counter);
int	ft_putstr(char *str, size_t *counter);
int	ft_putnbr(int num, size_t *counter);

#endif