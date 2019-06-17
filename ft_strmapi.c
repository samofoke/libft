/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:32:46 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/17 14:33:02 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		x[i] = f(i, s[i]);
		i++;
	}
	return (x);
}
