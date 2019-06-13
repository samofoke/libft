/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:01:59 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/13 15:05:42 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	x = (unsigned char)c;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	while (i++ < n)
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
