/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:57:50 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/22 11:04:46 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	if (!*substr)
		return ((char*)str);
	while (str[i] != '\0' && i < len)
	{
		cnt = 0;
		while (substr[cnt])
		{
			if (substr[cnt] == str[i + cnt])
				cnt++;
			else
				break ;
		}
		if (!substr[cnt] && len >= i + cnt)
			return ((char*)(str + i));
		i++;
	}
	return (NULL);
}
