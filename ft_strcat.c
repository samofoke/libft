/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:55:49 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/04 13:40:53 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int i;
	int len;

	len = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0')
	{
		dst[len++] = src[i++];
	}
	dst[len] = '\0';
	return (dst);
}
