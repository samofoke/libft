/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:58:21 by samofoke          #+#    #+#             */
/*   Updated: 2019/05/29 10:00:33 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *x;
	unsigned char y;
	int index;

	x = (unsigned char*)b;
	y = (unsigned char)c;
	index = 0;
	while (n--)
	{
		x[index++] = y;
	}
	return x;
}
