/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:55:33 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/04 13:04:35 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;
	int s_len;

	i = 0;
	s_len = ft_strlen((char*)src);
	if (n <= 0)
		return (dst);
	while (i < n)
	{
		if (i < s_len)
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
