/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 12:43:13 by samofoke          #+#    #+#             */
/*   Updated: 2019/07/04 12:54:10 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_for_strct(char **s, int c)
{
	char	*jn;

	if (!*s)
		return (NULL);
	if (!(jn = ft_strnew(*s, c, ft_strlen(*s) - c)))
		return (NULL);
	if (*s)
		free(*s);
	if (!(*s = (char*)malloc(ft_strlen(jn) + 1)))
		return (NULL);
	ft_bzero((void*)(*s), ft_strlen(jn) + 1);
	ft_strcpy(*s, jn);
	free(jn);
	jn = NULL;
	return (*s);
}
