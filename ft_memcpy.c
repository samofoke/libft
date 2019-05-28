/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:01:40 by samofoke          #+#    #+#             */
/*   Updated: 2019/05/28 14:54:23 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t index;
	unsigned char *d;
	unsigned char *s;

	index = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return (d);
}
