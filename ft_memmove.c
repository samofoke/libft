/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:02:20 by samofoke          #+#    #+#             */
/*   Updated: 2019/05/31 09:52:31 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *d;
	const char *s;
	size_t index;

	index = 0;
	d = (char*)dst;
	s = (const char*)src;
	if (n <= 0)
		return (d);
	if (s < d)
	{
		index = n;
		while (index)
		{
			d[index -1] = s[index - 1];
			index--;
		}
	}
	else
		ft_memcpy(d, s, n);
	return (d);
}
