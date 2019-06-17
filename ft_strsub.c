/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:38:16 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/17 14:18:06 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*x;
	size_t	i;

	i = 0;
	if (!s || !(x = ft_strnew(len)))
		return (NULL);
	while (i < len)
		x[i++] = s[start++];
	return (x);
}
