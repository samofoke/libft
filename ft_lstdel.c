/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 12:23:27 by samofoke          #+#    #+#             */
/*   Updated: 2019/07/03 13:01:21 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*x;

	x = (*alst);
	while (x)
	{
		del(x->content, x->content_size);
		free(*alst);
		(*alst) = NULL;
		x = x->next;
		(*alst) = x;
	}
}
