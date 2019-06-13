/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:55:33 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/13 15:12:49 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		s_len;

	i = 0;
	s_len = ft_strlen((char*)src);
	if (len <= 0)
		return (dst);
	while (i < len)
	{
		if (i < len)
		{
			dst[i] = src[i];
			i++;
			continue;
		}
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
