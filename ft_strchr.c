/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:56:45 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/13 15:02:56 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	x;
	char			*y;

	y = (char*)s;
	x = c;
	while (*y)
	{
		if (*y == x)
			return (y);
		if (*++y == x && x == '\0')
			return (y);
	}
	return (NULL);
}
