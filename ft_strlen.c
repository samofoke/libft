/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:23:15 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/02 22:53:46 by slimy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	printf("%ld\n", ft_strlen("I am immortal.\n"));
	printf("%ld\n", ft_strlen("king.\n"));
	printf("%ld\n", ft_strlen("...."));
	return 0;
}
