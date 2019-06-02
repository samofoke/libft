/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:23:33 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/02 23:19:13 by slimy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft"
#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

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

char	*ft_strdup(const char *src)
{
	char *d;
	int len;

	len = ft_strlen(src);
	d = (char*)malloc(len + 1);
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, src);
	return (d);
}

int	main(void)
{
	char *dup;
	dup = "i am king";
	printf("%s\n", dup);
	dup = ft_strdup("make a copy.");
	printf("%s\n", dup);
	//free(dup);
	return 0;
}





