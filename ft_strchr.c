/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:56:45 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/24 08:25:11 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;
	char	*n;

	x = (char)c;
	n = (char*)s;
	while (*n)
	{
		if (*(n) == x)
			return (n);
		n++;
	}
	if (x == '\0')
		return (n);
	return (NULL);
}
