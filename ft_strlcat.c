/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:42:53 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 11:42:54 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = ft_strlen(dst) + ft_strlen(src);
	if (!dst || !src)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	if (!n || ft_strlen(dst) > n)
		return (n + ft_strlen(src));
	ft_strlcpy(dst + ft_strlen(dst), src, n - ft_strlen(dst));
	return (i);
}
