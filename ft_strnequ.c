/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:36:12 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/17 10:51:40 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	x;

	if (!s1 || !s2)
		return (0);
	x = ft_strncmp(s1, s2, n);
	if (x == 0)
		return (1);
	return (0);
}
