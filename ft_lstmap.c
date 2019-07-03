/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 12:25:21 by samofoke          #+#    #+#             */
/*   Updated: 2019/07/03 13:58:04 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*x;
	t_list	*y;

	y = f(lst);
	x = y;
	while ((lst = lst->next))
	{
		x->next = f(lst);
		x = x->next;
	}
	x->next = NULL;
	return (y);
}
