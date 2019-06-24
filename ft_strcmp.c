/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:59:10 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/24 16:54:52 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*x1;
	unsigned char	*x2;
	int				x;

	x = 0;
	x1 = (unsigned char*)s1;
	x2 = (unsigned char*)s2;
	while (x1[x] && x2[x] && x1[x] == x2[x])
		x++;
	if ((x1[x] - x2[x]) < 0)
		return (-1);
	else if ((x1[x] - x2[x]) > 0)
		return (1);
	else
		return (0);
}
