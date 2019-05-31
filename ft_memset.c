/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:58:21 by samofoke          #+#    #+#             */
/*   Updated: 2019/05/31 15:40:14 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *x;
	unsigned char y;
	int i;

	x = (unsigned char*)b;
	y = (unsigned char)c;
	i = 0;
	while (n--)
	{
		x[i++] = y;
	}
	return x;
}
