/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:55:33 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/03 22:34:35 by slimy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

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

int	main(void)
{
	char s[20];

	printf("%s\n", ft_strncpy(s, "the lord.", 10));
	printf("%s\n", ft_strncpy(s, "matrix.", 8));
	printf("%s\n", ft_strncpy(s, "**** if.", 12));
	return 0;
}
