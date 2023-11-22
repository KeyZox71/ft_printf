/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:57:44 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/22 13:21:55 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase(unsigned long int n, char *base)
{
	unsigned long int	base_len;
	int					len;

	len = 0;
	base_len = (int)ft_strlen(base);
	if (n < base_len)
		len += write(1, &base[n % base_len], 1);
	else
	{
		len += ft_putnbrbase(n / base_len, base);
		len += write(1, &base[n % base_len], 1);
	}
	return (len);
}
