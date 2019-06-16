/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:20:44 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/16 09:58:35 by slimy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *x;

	if (!(x = (char*)malloc(sizeof(char) * (size + 1))))
		return (NUL);
	ft_bzero(x, size + 1);
	return (x);
}
