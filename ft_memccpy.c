/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:01:59 by samofoke          #+#    #+#             */
/*   Updated: 2019/05/29 09:46:02 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char x;
	unsigned char *d;
	unsigned char *s;
	size_t  index;

	x = (unsigned char)c;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	index = 0;
	while (index++ < n)
	{
		if (*s == x)
		{
			*d = x;
			d++;
			return (d);
		}
		*d++ = *s++;
	}
	return (NULL);
}
