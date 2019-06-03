/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:55:49 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/03 22:56:19 by slimy            ###   ########.fr       */
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

char	*ft_strcat(char *dst, const char *src)
{
	int x;
	int len;

	len = ft_strlen(dst);
	x = 0;
	while (src[x] != '\0')
	{
		dst[x++] = src[x++];
	}
	dst[len] = '\0';
	return (dst);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main(void)
{
	char s[20];
	ft_strcpy(s, "Hello ");
	ft_strcat(s, "World.");
	printf("%s\n", s);
	return 0;
}
