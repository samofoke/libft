/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:01:40 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/04 13:06:13 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	index = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
