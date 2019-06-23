/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:56:45 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/23 20:47:05 by slimy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t x;
	size_t n;

	x = 0;
	n = ft_strlen(s) + 1;
	while (x < n)
	{
		ft_ (s[x] == (char)c)
			return (char *)s +1;
		x++;
	}
	return (NULL);
}
