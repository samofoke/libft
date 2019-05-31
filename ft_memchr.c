/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:33:18 by samofoke          #+#    #+#             */
/*   Updated: 2019/05/31 12:57:55 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *st;
	unsigned char *x;

	st = (unsigned char*)s;
	x = (unsigned char*)c;
	while (n--)
	{
		if (st == x)
		{
			return (st);
		}
		st++;
	}
	return (NULL);
}

int		main(void)
{
	char b[80];
	char *ptr;

	strcpy(b , "We are immortals");
	printf("%s\n", b);
	ptr = (char *) memchr(b, 'i', 10);
	if (ptr == NULL)
	{
		printf("The char is not found in the string\n");
	}
	else
	{
		printf("%s\n", ptr);
	}
	return 0;
}
