/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 23:17:51 by slimy             #+#    #+#             */
/*   Updated: 2019/06/14 23:27:51 by slimy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long d;
	char x;
	long y;

	y = (long)n;
	d = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		y *= -1;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	while (d <= y)
		d *= 10;
	d /= 10;
	while (d != 0)
	{
		x = (y / d) + 48;
		ft_putchar_fd(x, fd);
		y %= d;
		d /= 10;
	}
}
