/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:28:41 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/07 17:16:56 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
//test for strcat.
/*{
	char s[2];
	ft_strcpy(s, "Hello ");
	ft_strcat(s, "World.");
	printf("%s\n", s);
	return 0;
}

//test fot strncpy.
{
	char d[20];

	printf("%s\n", ft_strncpy(d, "kingNorth.", 5));
	printf("%s\n", ft_strncpy(d, "123456", 3));
	printf("%s\n", ft_strncpy(d, "******", 0));
	return 0;
}

//test for strncat.
{
	char s[20];

	ft_strcpy(s, "hello ");
	ft_strncat(s, "World.", 8);
	printf("%s\n", s);
	ft_strncat(s, "*****", 3);
	printf("%s\n", s);
	return 0;
}
//testing memcmp.
{
  char *s1 = "a";
  char *s2 = "a";

  printf("%d\n",ft_memcmp(s1, s2, 20));
  return (0);
}*/
//the test for strlcat.
{
	const char some[20] = "abc";
	char buf[20] = "efg";
	printf("%s and %s on this\n", some, buf);
	//if (strlcpy(buf, some, sizeof(buf)) >= sizeof(buf))
		//printf("whats this.\n");
	if (strlcat(buf, some, sizeof(buf)) >= sizeof(buf))
		printf("i think is working.i\n");
	return 0;
}
/*{
	char b[20];
	char *x;

	strcpy(b, "Hello");
	x = strchr(b, 'l');
	if (x == NULL)
	{
		printf("char is not found.\n");
	}
	else
	{
		printf("char is found: %s\n", x);
	}
	return 0;
}*/
