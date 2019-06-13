/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 09:50:35 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/13 15:15:00 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		r_i;
	char	*t_s;

	t_s = (char*)s;
	r_i = ft_strlen(t_s);
	while (r_i > 0 && (t_s[r_i] != c))
		r_i--;
	if (t_s[r_i] == c)
		return (t_s + r_i);
	else
		return (NULL);
}
