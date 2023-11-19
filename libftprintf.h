/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:50:36 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/18 18:51:53 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_printconversion(char conversion, va_list args);
void	ft_putnbrulong(int n);
void	ft_putaddr(void *ptr);

#endif