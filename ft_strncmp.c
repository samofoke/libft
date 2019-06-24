/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:59:28 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/24 17:28:28 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*x1;
	unsigned char	*x2;
	size_t			x;

	x = 0;
	x1 = (unsigned char*)s1;
	x2 = (unsigned char*)s2;
	while (n > 0)
	{
		if (!(x1[x] || x2[x]))
			break ;
		if (x1[x] != x2[x])
		{
			if ((x1[x] - x2[x]) < 0)
				return (-1);
			else if ((x1[x] - x2[x]) > 0)
				return (1);
		}
		else
			x++;
		n--;
	}
	return (0);
}
