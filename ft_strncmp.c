/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:59:28 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/17 10:19:20 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *x1;
	unsigned char *x2;

	x1 = (unsigned char*)s1;
	x2 = (unsigned char*)s2;
	if (n <= 0)
		return (0);
	if (!ft_strlen((char*)x1) || !ft_strlen((char*)x2))
		return (*x1 - *x2);
	while (n-- && *x1 && *x2)
	{
		if ((*x1 > *x2) || (*x1 < *x2))
			return (*x1 - *x2);
		if (n == 0)
			break ;
		x1++;
		x2++;
	}
	return (*x1 - *x2);
}
