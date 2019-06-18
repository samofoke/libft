/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 09:27:16 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/18 09:54:46 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	y;

	y = (long)n;
	if (y == -2147483648)
		ft_putstr("-2147483648");
	else if (y < 0)
	{
		ft_putchar('-');
		ft_putnbr(-y);
	}
	else if (y >= 10)
	{
		ft_putnbr(y / 10);
		ft_putchar(y % 10 + 48);
	}
	else
		ft_putchar(y + 48);
}
