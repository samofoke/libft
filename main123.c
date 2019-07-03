/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 09:09:37 by samofoke          #+#    #+#             */
/*   Updated: 2019/07/03 13:46:49 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
void	striter_test(char *s);

void	striter_test(char *s)
{
	*s = 'z';
}
*/
/*
char	strmap_test(char c)
{
	return (c);
}
*/
int		main(void)

//test for strstrim.
/*{
	char    x[] = "     hello    ";
	char    *y;
	char    z[] = "\t\n hello    ";
	char    *s;
	
	ft_putstr(x);
	ft_putchar('\n');
	y = ft_strtrim(x);
	ft_putendl(y);

	ft_putstr(z);
	ft_putchar('\n');
	s = ft_strtrim(z);
	ft_putendl(y);
	return 0;
}*/
/*
//test for ITOA
{
	char	*a;
	char	st1[] = "5";
	int		in1 = 10;

	ft_putnbr(in1);
	ft_putchar('\n');
	a = ft_itoa(in1);
	ft_putendl(a);
	if (ft_strcmp(a, st1) == 0)
	{
		ft_putstr("true");
	}
	else
	{
		ft_putstr("false");
	}
	return 0;
}
*/
/*
//test for strsplit.
{
	char	s[] = "hello***code***world";
	char	**x;
	//char	y[] = "iiiiihelloiihellohelloiii";
	//char	**z;

	printf("initial: %s\n", s);
	x = ft_strsplit(s, '*');
	ft_putchar('\n');
	printf("%s\n %s\n %s\n",x[0], x[1], x[2]);
	putchar('\n');
	return 0;
}
*/
/*
//test for memalloc.
{
	char *s;
	//char *x;

	s = (char *)ft_memalloc(2);
	if (s && s[0] == '\0' && s[1] == '\0')
	{
		ft_putstr("true");
		free(s);
		putchar('\n');
	}
	else
	{
		ft_putstr("false");
		putchar('\n');
	}
	return 0;
}
*/
/*
//test for memdel.
{
	void	*vd;

	vd = malloc(10);
	if (vd)
	{
		ft_memdel(&vd);
		if (vd == NULL)
		{
			ft_putstr("true");
			putchar('\n');
		}
		else
		{
			ft_putstr("false");
			free(vd);
			putchar('\n');
		}
		return 0;
	}
}
*/

//test for strclr.
/*
{
	char	s[10] = "hello";

	ft_putstr(s);
	putchar('\n');
	ft_strclr(s);
	ft_putendl(s);
	return 0;

}
*/

//test for striter.
/*
{
	char s[10] = "hello";

	ft_putstr(s);
	ft_putchar('\n');
	ft_striter(s, &striter_test);
	ft_putendl(s);
	if (ft_strcmp(s, "zzz") == 0)
	{
		ft_putendl("true");
	}
	else
	{
		ft_putendl("false");
	}
	return 0;
}
*/

//test for strmap.
/*
{
	char	x[6] = "hello";
	char	*s;

	ft_putstr(x);
	putchar('\n');
	s = ft_strmap(x, &strmap_test);
	ft_putendl(s);
	if (strcmp(x, s) == 0)
	{
		ft_putendl("true");
	}
	else
	{
		ft_putendl("false");
	}
	return 0;
}
*/

//test for strequ.
/*
{
	char	s[6] = "hello";
	char	x[6] = "world";
	int	y;

	ft_putstr(s);
	ft_putchar('\n');
	y = ft_strequ(s, s);
	ft_putnbr(y);
	ft_putchar('\n');
	if (y == 1)
	{
		ft_putendl("true");
	}
	else
	{
		ft_putendl("false");
	}
	y = ft_strequ(s, x);
	ft_putnbr(y);
	ft_putchar('\n');
	if (y == 0)
	{
		ft_putendl("faceup");
	}
	else
	{
		ft_putendl("facedown");
	}
	return 0;
}
*/
//test for lstnew bonus
//
{
	char s[6] = "hello";
	t_list *lst;
	ft_putendl(s);
	lst = ft_lstnew((void *)s, 5);
	ft_putendl(lst);
	return 0;
}




























