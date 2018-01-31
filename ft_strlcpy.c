/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 12:20:44 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/30 12:20:47 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (!dst || !src)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	i = 0;
	while (i + 1 < n && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	if (n)
		dst[i] = '\0';
	return (ft_strlen(src));
}
