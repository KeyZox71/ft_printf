/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:52:46 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/20 10:40:57 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	int				i;

	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr < 10)
	{
		write(fd, &(char){nbr + '0'}, 1);
		i++;
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		write(fd, &(char){nbr % 10 + '0'}, 1);
	}
}
