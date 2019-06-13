/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:22:59 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/13 15:07:19 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*x1;
	unsigned char	*x2;

	x1 = (unsigned char*)s1;
	x2 = (unsigned char*)s2;
	while (n--)
	{
		if ((*x1 > *x2) || (*x1 < *x2))
			return (*x1 - *x2);
		x1++;
		x2++;
	}
	return (0);
}
