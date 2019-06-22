/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 03:00:44 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/22 04:05:13 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char *s1 = "oh no not the empty string !";
	char *s2 = "";
	size_t max = 0;
	printf("%s\n", strnstr(s1, s2, max));
	printf("%s\n", ft_strnstr(s1, s2, max));
	return 0;
}
