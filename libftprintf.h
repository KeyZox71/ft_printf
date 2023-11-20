/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:50:36 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/20 10:04:12 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_printconversion(char conversion, va_list args);
void	ft_putnbrulong(unsigned long n);
void	ft_putaddr(void *ptr);

int		ft_putstr(char *s);
void	ft_putnbrbase(int n, char *base);
int		ft_putchar(char c);
void	ft_putnbr(int n);

#endif