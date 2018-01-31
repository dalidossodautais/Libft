/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:42:46 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 11:42:47 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	if (!dst || !src)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	ft_strlcpy(dst + ft_strlen(dst), src, n + 1);
	return (dst);
}
