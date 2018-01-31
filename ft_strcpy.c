/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:32:29 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 15:32:30 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	if (!dst || !src)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	i = 0;
	while (src[i])
		(dst[i] = src[i]) && ++i;
	dst[i] = '\0';
	return (dst);
}
