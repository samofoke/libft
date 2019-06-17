/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:55:33 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/17 16:40:43 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		x;

	i = 0;
	x = ft_strlen((char*)src);
	if (len <= 0)
		return (dst);
	while (i < len)
	{
		if (i < len)
		{
			dst[i] = src[i];
			i++;
			continue ;
		}
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
