/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:32:33 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 15:32:35 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (!dst || !src)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	i = 0;
	while (i < n && src[i])
		(dst[i] = src[i]) && ++i;
	ft_bzero(dst + i, n - i);
	return (dst);
}
