/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:13:57 by samofoke          #+#    #+#             */
/*   Updated: 2019/05/29 10:36:21 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *b, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);

#endif
