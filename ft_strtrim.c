/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:40:35 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/17 16:08:26 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*x;
	size_t			ln;
	unsigned int	st;

	if (!s)
		return (NULL);
	ln = ft_strlen(s);
	st = 0;
	while (ln)
	{
		if (s[ln - 1] != ' ' && s[ln - 1] != '\t' && s[ln - 1] != '\n')
			break ;
		ln--;
	}
	while (s[st] == ' ' || s[st] == '\t' || s[st] == '\n')
	{
		st++;
	}
	x = ft_strsub(s, st > ln ? 0 : st, ln > st ? ln - st : 0);
	return (x);
}
