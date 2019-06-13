/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:33:18 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/13 14:15:09 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	unsigned char	x;

	st = (unsigned char*)s;
	x = (unsigned char)c;
	while (n--)
	{
		if (*st == x)
		{
			return (st);
		}
		st++;
	}
	return (NULL);
}
