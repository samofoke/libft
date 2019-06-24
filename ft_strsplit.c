/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:41:21 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/24 08:00:05 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		cnt_wd(char *s, char c)
{
	int			x;
	int			n;

	x = 0;
	n = 0;
	while (s[x])
	{
		while (s[x] == c && s[x] != '\0')
			x++;
		if (s[x] != c && s[x] != '\0')
			n++;
		while (s[x] != c && s[x] != '\0')
			x++;
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		x;
	size_t		y;
	size_t		z;
	char		**sp;

	x = 0;
	y = 0;
	if (s == NULL)
		return (NULL);
	sp = (char **)malloc(sizeof(char *) * (cnt_wd((char *)s, c) + 1));
	if (sp == NULL)
		return (NULL);
	while (s[x])
	{
		while (s[x] == c)
			x++;
		z = x;
		while (s[x] && s[x] != c)
			x++;
		if (x > z)
			sp[y++] = ft_strsub(s, z, x - z);
	}
	sp[y] = NULL;
	return (sp);
}
