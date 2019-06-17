/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:28:41 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/17 12:28:55 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
//#include <ctype.h>

int		main(void)
//test for strcat.
/*{
	char s[2];
	ft_strcpy(s, "Hello ");
	ft_strcat(s, "World.");
	printf("%s\n", s);
	return 0;
}
*/

//test fot strncpy.
{
	char d[20];
	printf("%s\n", strncpy(d, "123456", 5));
	printf("%s\n", strncpy(d, " ", 2));
	return 0;
}

/*
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
}
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
}*/

//Test for strchr.
/*
{
	char b[20];
	char *x;

	ft_strcpy(b, "Hello");
	x = ft_strchr(b, '\0');
	if (x == NULL)
	{
		printf("char is not found: %s\n", x);
	}
	else
	{
		printf("char is found: %s\n", x);
	}
	return 0;
}
*/
/*
//test for strrchr.
{
	printf("%s\n", ft_strrchr("abcdeabcde", 'a'));
	if (ft_strrchr("abcdeabcde", 'x') == NULL)
		printf("NULL\n");
	return 0;
}
*/
/*
//test for strstr.
{
	printf("%s\n", ft_strstr("find me in this string.!", "is"));
	return 0;
}
*/

/*
//test for strnstr.
{
	const char *sample1 = "i am king i am alive.";
	const char *sample2 = "k";
	char *ptr;

	ptr = ft_strnstr(sample1, sample2, 20);
	printf("%s\n", ptr);
}*/
/*
//test for memcmp.
{
    char buffer[80];
    int retval;

    strcpy( buffer, "a" );

    retval = memcmp( buffer, "a", 1);
	printf("%d\n", retval);
    return 0;
}*/
/*
//test for strcmp.
{
	printf("%d\n", ft_strcmp("a", "a"));
	return 0;
}
*/
/*
// test for strncmp.
{
	printf("%d\n", ft_strncmp("d", "a", 3));
	return 0;
}
*/
//test for isalpha.
/*
{
	char c;
	
	printf("Enter a character: ");
	
	scanf("%c", &c);
	
	if (ft_isalpha(c) == 0)
		printf("%c is not an alphabet.", c);
	else
		printf("%c is an alphabet.", c);
	return 0;
}
*/
//test for isdigits.
/*{
	char c;
	
	printf("Enter a character: ");
	
	scanf("%c",&c);
	
	if (ft_isdigit(c) == 0)
		printf("%c is not a digit.",c);
	else
		printf("%c is a digit.",c);
	return 0;
}
*/
//test for isalnum.
/*
{
	char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalnum(c) == 0)
        printf("%c is not an alphanumeric character.", c);
    else
        printf("%c is an alphanumeric character.", c);

    return 0;
}
*/
//test for isascii.
/*
{
	char s;

	s = 0x20;
	while (s <= 0x7f)
	{
		if (s == 0x7f)
			break;
		if (ft_isascii(s))
			printf("the character is %c\n", s);
		else
			printf("no char found.");
		printf("%#04x  ", s);
		s++;
	}
	return 0;
}
*/
//test for isprint.
/*
{
	int s;
	s = 1;
	while (s <= 127)
	{
		if (&ft_isprint != 0)
			printf("%c\n", s);
		else
			break;
		s++;
	}
	return 0;
}
*/
//test for toupper.
/*
{
	char x;
	x = 's';
	printf("%c -> %c\n", x, ft_toupper(x));
	return 0;
}
*/
//test for tolower.
/*
{
	char y;
	y = 'A';
	printf("%c -> %c\n", y, ft_tolower(y));
	return 0;
}
*/
//test for memalloc.
















