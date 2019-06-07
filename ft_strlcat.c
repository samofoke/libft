/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:56:30 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/07 15:21:52 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t s_i;
	size_t d_len;
	size_t s_len;
	size_t t_size;

	d_len = (ft_strlen(dst) < size ? ft_strlen(dst) : size);
	t_size = size - d_len;
	i = d_len;
	s_i = 0;
	s_len = ft_strlen(src);
	if (t_size == 0)
		return (size + s_len);
	while (t_size > 1 && src[s_len] != '\0')
	{
		dst[i] = src[s_i];
		i++;
		s_i++;
		t_size--;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}
