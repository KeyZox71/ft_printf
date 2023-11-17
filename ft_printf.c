/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:48:37 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/17 20:03:48 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	char		*result;
	int			i;
	int			j;
	va_list		args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				ft_putchar_fd('%', 1);
			else if (format[i] == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
			else if (format[i] == 'c')
				ft_putchar_fd(va_arg(args, char *)[0], 1);
			else if (format[i] == 'i' || format[i] == 'd')
				ft_putnbr_fd(va_arg(args, int), 1);
		}
		else
			ft_putchar_fd(format[i], i);
		i++;
	}
	return (ft_strlen(result));
}
