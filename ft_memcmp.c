/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:22:59 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/02 19:29:33 by slimy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *x1;
	unsigned char *x2;

	x1 = (unsigned char*)s1;
	x2 = (unsigned char*)s2;
	while (n--)
	{
		if ((*x1 > *x2)||(*x1 < *x2))
			return (*x1 - *x2);
		x1++;
		x2++;
	}
	return 0;
}

char	*ft_strcpy(char *dst, const char *src)
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

int	main(void)
{
	char b[10];
	int c;

	ft_strcpy(b, "abc");
	c = ft_memcmp(b, "efg", 5);
	if (c < 0)
		printf("less than.\n");
	else if (c == 0)
		printf("equal to.\n");
	else
		printf("greator than.\n");
	return 0;
}



