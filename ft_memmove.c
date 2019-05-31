/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:02:20 by samofoke          #+#    #+#             */
/*   Updated: 2019/05/31 15:39:44 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *d;
	const char *s;
	size_t i;

	i = 0;
	d = (char*)dst;
	s = (const char*)src;
	if (n <= 0)
		return (d);
	if (s < d)
	{
		i = n;
		while (i)
		{
			d[i -1] = s[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(d, s, n);
	return (d);
}
