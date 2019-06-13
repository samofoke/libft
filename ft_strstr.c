/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:57:27 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/13 15:22:07 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *substr)
{
	char	*s;
	size_t	len;

	s = (char*)str;
	len = ft_strlen((char*)substr);
	if (*s && len == 0)
		return (s);
	while (*s)
	{
		if (ft_strncmp(s, substr, len) == 0)
			return (s);
		s++;
	}
	if (s == substr)
		return (s);
	return (NULL);
}
