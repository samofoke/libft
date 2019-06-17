/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:25:13 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/17 09:21:20 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*x;
	int		i;

	if (!s)
		return (NULL);
	x = ft_strnew(ft_strlen(s));
	if (x == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		x[i] = f(s[i]);
		i++;
	}
	return (x);
}
