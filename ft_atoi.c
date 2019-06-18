/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:59:43 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/18 11:28:45 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long int	x;
	int					sign;
	char				*nstr;

	sign = 1;
	x = 0;
	nstr = (char*)str;
	while (*nstr == ' ' || *nstr == '\n' || *nstr == '\t' || *nstr == '\r' || \
			*nstr == '\v' || *nstr == '\f')
		nstr++;
	if (*nstr == '-' || *nstr == '+')
	{
		if (*nstr++ == '-')
			sign = -1;
	}
	while (ft_isdigit(*nstr))
		x = x * 10 + (*nstr++ - '0');
	if (x > 9223372036854775807)
		return (sign > 0 ? -1 : 0);
	return (sign * x);
}
