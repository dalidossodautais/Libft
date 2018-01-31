/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 12:32:10 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 12:32:11 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;

	if (!dst || !src)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	if (dst > src)
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	else
	{
		i = 0;
		while (i < len)
			(((unsigned char *)dst)[i] = ((unsigned char *)src)[i]) && ++i;
	}
	return (dst);
}
