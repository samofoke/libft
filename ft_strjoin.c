/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:39:30 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/17 14:13:14 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*x;

	if (!s1 || !s2)
		return (NULL);
	x = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (x == NULL)
		return (NULL);
	ft_strcat(x, s1);
	ft_strcat(x, s2);
	return (x);
}
