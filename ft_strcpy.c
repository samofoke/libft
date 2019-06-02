/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:23:51 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/03 00:37:52 by slimy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

size_t	ft_strlen(const char *s);

char *ft_strcpy(char *dst, const char *src)
{
	int x;

	x = 0;
	while (src[x] != '\0')
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (dst);
}

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int len;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len++] = s2[i++];
	}
	s1[len] = '\0';
	return (s1);
}

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

int	main(void)
{
	char d[20];
	ft_strcpy(d, "hello ");
	ft_strcat(d, "world");
	printf("%s\n", d);
	return 0;
}
