/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:52:46 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/20 16:00:22 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	nbr;
	int				len;

	len = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr < 10)
		len += write(1, &(char){nbr + '0'}, 1);
	else
	{
		len += ft_putnbr(nbr / 10);
		len += write(1, &(char){nbr % 10 + '0'}, 1);
	}
	return (len);
}
