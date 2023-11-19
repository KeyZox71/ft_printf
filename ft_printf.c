/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:48:37 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/18 20:56:29 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"
#include <stdarg.h>

void	ft_putaddr(void *ptr)
{
	
}

void	ft_putnbrulong(int n)
{
	if (n < 10)
		write(1, &(char){n + '0'}, 1);
	else
	{
		ft_putnbr_fd(n / 10, 1);
		write(1, &(char){n % 10 + '0'}, 1);
	}
}

int	ft_printconversion(char conversion, va_list args)
{
	if (conversion == '%')
		ft_putchar('%');
	else if (conversion == 's')
		ft_putstr(va_arg(args, char *));
	else if (conversion == 'c')
		ft_putchar(va_arg(args, char *)[0]);
	else if (conversion == 'i' || conversion == 'd')
		ft_putnbr(va_arg(args, int));
	else if (conversion == 'u')
		ft_putnbrulong(va_arg(args, unsigned long));
	else if (conversion == 'p')
		ft_putstr((char *)va_arg(args, void *));
	else if (conversion == 'x')
		ft_putnbrbase(va_arg(args, int), "0123456789abcdef");
	else if (conversion == 'X')
		ft_putnbrbase(va_arg(args, int), "0123456789ABCDEF");
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			j;
	va_list		args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_printconversion(format[i], args);
		}
		else
			ft_putchar_fd(format[i], i);
		i++;
	}
	va_end(args);
	return (ft_strlen(result));
}
