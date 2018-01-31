/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 13:46:54 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 13:46:55 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	i = 0;
	while (i < n && ((unsigned char *)s)[i] != (unsigned char)c)
		++i;
	return (i < n ? (void *)(s + i) : 0);
}
