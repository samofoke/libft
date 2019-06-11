/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:02:19 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/11 17:06:04 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
